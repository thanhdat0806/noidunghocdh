import cv2
import numpy as np

# Load ảnh từ file
img = cv2.imread('C:/Users/Admin/Desktop/xulyanh/london.jpg')

# Hiển thị ảnh
#cv2.imshow('Anh goc', img)

#D2
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
# Áp dụng Gaussian blur để giảm nhiễu
gray_blur = cv2.GaussianBlur(gray, (5, 5), 0)
# Phát hiện đường tròn bằng phép biến đổi Hough
circles = cv2.HoughCircles(gray_blur, cv2.HOUGH_GRADIENT, 1, 20,
                           param1=50, param2=30, minRadius=0, maxRadius=0)

# Vẽ đường tròn lên ảnh gốc
if circles is not None:
    circles = np.round(circles[0, :]).astype("int")
    for (x, y, r) in circles:
        cv2.circle(img, (x, y), r, (0, 255, 0), 2)

# Hiển thị ảnh gốc và ảnh đã phát hiện đường tròn
cv2.imshow('anh phat hien duong tron', img)
cv2.imshow('Anh phat hien duong tron', gray_blur)
cv2.waitKey(0)
cv2.destroyAllWindows()
