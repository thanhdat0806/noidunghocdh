import cv2

# Đọc video
video = cv2.VideoCapture("green.mp4")

# Tạo tấm màn xanh
green_screen = cv2.imread("hollywood.jpg")

# Lấy chiều rộng và chiều cao của video
width = int(video.get(cv2.CAP_PROP_FRAME_WIDTH))
height = int(video.get(cv2.CAP_PROP_FRAME_HEIGHT))

# Tạo video writer để ghi lại video mới
fourcc = cv2.VideoWriter_fourcc(*"mp4v")
writer = cv2.VideoWriter("green.mp4", fourcc, 30, (width, height))

# Vòng lặp xử lý từng khung hình và ghi lại video mới
while True:
    # Đọc từng khung hình trong video
    ret, frame = video.read()
    
    if not ret:
        break
    
    # Chuyển đổi màu khung hình sang không gian màu HSV
    hsv_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

    # Tạo mask để xác định vị trí của tấm màn xanh trong khung hình
    mask = cv2.inRange(hsv_frame, (36, 0, 0), (183, 255, 255))
    

    # Áp dụng mask lên khung hình để tách nền
    res = cv2.bitwise_and(frame, frame, mask=mask)

    # Ghi lại khung hình đã được xử lý vào video mới
    writer.write(res)

# Giải phóng tài nguyên
video.release()
writer.release()
cv2.destroyAllWindows()
