//face-api.js
//https://github.com/justadudewhohacks/face-api.js/
//copy thư mục weights
//face-api.min.js

const video = document.getElementById("video");

async function loadTrainingData() {
  const labels = [
    "Nhu Cua",
    "Thanh Dat",
    "Xuan Dat",
  
  ];
  const faceDescriptors = [];
  for (const label of labels) {
    const descriptors = [];
    for (let i = 1; i <= 4; i++) {
      const image = await faceapi.fetchImage(`/images/${label}/${i}.jpg`);
      // trả về các điểm mốc khuôn mặt và bộ mô tả khuôn mặt cho khuôn mặt đó
      const detection = await faceapi
        .detectSingleFace(image) 
        .withFaceLandmarks()
        .withFaceDescriptor();
      descriptors.push(detection.descriptor);
    }
    faceDescriptors.push(
      new faceapi.LabeledFaceDescriptors(label, descriptors)
    );
    Toastify({
      text: `Tải xong dữ liệu của ${label}!`,
    }).showToast();
  }

  return faceDescriptors;
}

function startVideo() {
  if (navigator.mediaDevices.getUserMedia) {
    navigator.mediaDevices
      .getUserMedia({ video: true })
      .then(function (stream) {
        video.srcObject = stream;
      })
      .catch(function (error) {
        console.log("Lỗi...");
      });
  }
}

let faceMatcher;
async function init() {
  await Promise.all([
    //tải các models
    faceapi.nets.ssdMobilenetv1.loadFromUri("/models"),
    faceapi.nets.tinyFaceDetector.loadFromUri("./models"),
    faceapi.nets.faceLandmark68Net.loadFromUri("./models"),
    faceapi.nets.faceRecognitionNet.loadFromUri("./models"),
    faceapi.nets.faceExpressionNet.loadFromUri("./models"),
  ]).then(startVideo);
  Toastify({
    text: `Tải xong model nhận diện!`,
  }).showToast();
}
init();

video.addEventListener("play", async () => {
  const canvas = faceapi.createCanvasFromMedia(video);
  document.body.append(canvas);
  const displaySize = { width: video.width, height: video.height };
  faceapi.matchDimensions(canvas, displaySize);
  const labeledFaceDescriptors = await loadTrainingData();
  const faceMatcher = new faceapi.FaceMatcher(labeledFaceDescriptors, 0.6);
  console.log(faceMatcher);
  setInterval(async () => {
    const detections = await faceapi
      .detectAllFaces(video, new faceapi.TinyFaceDetectorOptions())
      .withFaceLandmarks()
      .withFaceExpressions()
      .withFaceDescriptors()
    const resizedDetections = faceapi.resizeResults(detections, displaySize);
    // trả về các điểm mốc khuôn mặt và bộ mô tả khuôn mặt cho khuôn mặt đó
    // console.log("các điểm", resizedDetections);
    canvas.getContext("2d").clearRect(0, 0, canvas.width, canvas.height); //clear canvas
    for (const detection of resizedDetections) {
      const box = detection.detection.box;
      const drawOptions = {
        label: faceMatcher.findBestMatch(detection.descriptor),//so sánh các trong camera vs dữ liệu được đưa vào
        lineWidth: 2,
      };
      const drawBox = new faceapi.draw.DrawBox(box, drawOptions);//vẽ label
      drawBox.draw(canvas);
    }
    faceapi.draw.drawFaceLandmarks(canvas, resizedDetections); //nhận diện điểm mốc
    faceapi.draw.drawFaceExpressions(canvas, resizedDetections); //  biểu cảm

  }, 100);
});

