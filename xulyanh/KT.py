import cv2
import numpy as np
#a
# Load ảnh từ file
img = cv2.imread('C:/Users/Admin/Desktop/xulyanh/london.jpg')

# Hiển thị ảnh
cv2.imshow('Anh goc', img)
#cv2.waitKey(0)
#cv2.destroyAllWindows()

#B
# Lọc trung bình với kernel kích thước 5x5
kernel = np.ones((5, 5), np.float32) / 25
img_blur = cv2.filter2D(img, -1, kernel)

# Hiển thị ảnh gốc và ảnh đã lọc trung bình
#cv2.imshow('Anh goc', img)
cv2.imshow('Anh da loc trung binh', img_blur)
#cv2.waitKey(0)
#cv2.destroyAllWindows()

#C
# Chuyển ảnh sang grayscale
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Lọc Sobel theo trục x và y
sobelx = cv2.Sobel(gray, cv2.CV_64F, 1, 0, ksize=5)
sobely = cv2.Sobel(gray, cv2.CV_64F, 0, 1, ksize=5)

# Tính độ lớn gradient và hướng
grad_mag = np.sqrt(sobelx**2 + sobely**2)
grad_dir = np.arctan2(sobely, sobelx)

# Hiển thị ảnh gốc và ảnh gradient
# cv2.imshow('Ảnh gốc', img)
cv2.imshow('Anh gradient', grad_mag.astype(np.uint8))
#cv2.waitKey(0)
#cv2.destroyAllWindows()

#D1
# Áp dụng Gaussian blur để giảm nhiễu
gray_blur = cv2.GaussianBlur(gray, (5, 5), 0)

# Phát hiện đường thẳng bằng phép biến đổi Hough
lines = cv2.HoughLines(gray_blur, 1, np.pi/180, 150)

# Vẽ đường thẳng lên ảnh gốc
for line in lines:
    rho, theta = line[0]
    a = np.cos(theta)
    b = np.sin(theta)
    x0 = a*rho
    y0 = b*rho
    x1 = int(x0 + 1000*(-b))
    y1 = int(y0 + 1000*(a))
    x2 = int(x0 - 1000*(-b))
    y2 = int(y0 - 1000*(a))
    cv2.line(img, (x1, y1), (x2, y2), (0, 0, 255), 2)

# Hiển thị ảnh gốc và ảnh đã phát hiện đường thẳng
# cv2.imshow('Ảnh gốc', img)
cv2.imshow('Anh phat hien duong thang', gray_blur)
#cv2.waitKey(0)
#cv2.destroyAllWindows()


