import cv2
import numpy as np

# Đọc ảnh vào và chuyển sang ảnh xám
img = cv2.imread('C:/Users/Admin/Desktop/xulyanh/london.jpg')
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Áp dụng bộ lọc Gauss để giảm nhiễu
gray = cv2.GaussianBlur(gray, (5, 5), 0)

# Sử dụng phép biến đổi Hough để phát hiện đường thẳng
lines = cv2.HoughLinesP(gray, rho=1, theta=np.pi/180, threshold=50, minLineLength=50, maxLineGap=10)

# Vẽ các đường thẳng được tìm thấy lên ảnh gốc
for line in lines:
    x1, y1, x2, y2 = line[0]
    cv2.line(img, (x1, y1), (x2, y2), (0, 255, 0), 2)

# Hiển thị ảnh gốc và ảnh sau khi phát hiện đường thẳng
cv2.imshow('Anh phat hien duong thang', img)
cv2.imshow('Anh sau khi giam nhieu', gray)
cv2.waitKey(0)
cv2.destroyAllWindows()
