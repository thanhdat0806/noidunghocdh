
//Speech Web API
//lấy dữ liệu đưa ra màn hình
const Searchoutput = document.querySelector("#search-output");
const Searchinput = document.querySelector("#search-input");

//khai báo trợ lí ảo
var SpeechRecognition = SpeechRecognition || webkitSpeechRecognition;
const recognition = new SpeechRecognition();
const synth = window.speechSynthesis;
recognition.lang = "vi-VI";
recognition.continuous = true; // cho phép nhận âm thanh liên tục

//icon bật tắc
const heart = document.querySelector("#heart");
const microphone = document.querySelector(".microphone");
const microphoneicon = document.querySelector(".microphone-icon");
const recordingicon = document.querySelector(".recording-icon");
//Máy tính phát lại âm thanh
const speak = (text) => {
  if (synth.speaking) {
    console.error("Lỗi...");
    return;
  }
  const utter = new SpeechSynthesisUtterance(text);
  utter.lang = "vi-VI";
  utter.onend = () => {
    console.log("SpeechSynthesisUtterance.onend");
  };
  utter.onerror = (err) => {
    console.error("SpeechSynthesisUtterance.onerror", err);
  };
  synth.speak(utter);
};

//bắt đầu nhận âm thanh khi click
microphoneicon.addEventListener("click", micBtnClick);
function micBtnClick() {
  console.log(microphoneicon.className);
  heart.innerHTML = "Đang nghe...";
  Searchinput.innerHTML = "";
  Searchoutput.innerHTML = "";

  //kiểm tra nếu chưa ghi âm thì bắt đầu ghi
  if (microphoneicon.className == "microphone-icon md hydrated") {
    recognition.start();
    microphone.classList.add("recording");
  }
  //ngược lại ghi r sẽ dừng
  else {
    recognition.stop();
  }
}

//kết thúc nhận âm thanh khi click
recordingicon.addEventListener("click", micBtnClickend);
function micBtnClickend() {
  const textToSpeech = "Hẹn gặp lại bạn ?";
  Searchoutput.innerHTML = textToSpeech;
  speak(textToSpeech);
  Searchinput.innerHTML = "";
  heart.innerHTML = "";
  recognition.stop();
  microphone.classList.remove("recording");
}
//trả về kết quả
recognition.addEventListener("result", resultOfSpeechRecognition);
function resultOfSpeechRecognition(event) {
  const current = event.resultIndex;
  const transcript = event.results[current][0].transcript;
  Searchinput.innerHTML = transcript;

  //xử lí các âm thanh với các từ định nghĩa sẵn
  if (transcript.toLowerCase().includes("chào")) {
    const textToSpeech = "Bạn cần tìm gì ?";
    Searchoutput.innerHTML = textToSpeech;
    speak(textToSpeech);
  } else if (transcript.toLowerCase().includes("giờ")) {
    var today = new Date();
    var time = "";
    if (today.getHours() >= 1 && today.getHours() <= 12) {
      time = "sáng";
    } else if (today.getHours() >= 13 && today.getHours() <= 17) {
      time = "chiều";
    } else {
      time = "tối";
    }
    const textToSpeech = `Bây giờ là  ${today.getHours()} giờ ${today.getMinutes()} phút ${time}`;
    Searchoutput.innerHTML = textToSpeech;
    speak(textToSpeech);
  }
  else if (transcript.toLowerCase().includes("google")) {
    const textToSpeech = "Đã mở google";  
    window.open('https://www.google.com/webhp?hl=vi&sa=X&ved=0ahUKEwjLxITjq9D6AhXxplYBHdlbDoMQPAgI');
    Searchoutput.innerHTML = textToSpeech;
    speak(textToSpeech);
  }
  else if (transcript.toLowerCase().includes("kết thúc")) {
    recognition.stop();
    heart.innerHTML = "";
    Searchinput.innerHTML = "";
    microphone.classList.remove("recording");
    const textToSpeech = "Hẹn gặp lại bạn !";
    Searchoutput.innerHTML = textToSpeech;
    speak(textToSpeech);
  } else {
    const textToSpeech = "Không tìm thấy thông tin bạn yêu cầu !";
    Searchoutput.innerHTML = textToSpeech;
    speak(textToSpeech);
  }
}
