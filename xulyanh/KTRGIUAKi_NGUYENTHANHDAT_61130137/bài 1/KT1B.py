import cv2
import numpy as np
#a
# Load ảnh từ file
img = cv2.imread('C:/Users/Admin/Desktop/xulyanh/london.jpg')

# Lọc trung bình với kernel kích thước 5x5
kernel = np.ones((5, 5), np.float32) / 25
img_blur = cv2.filter2D(img, -1, kernel)

# Hiển thị ảnh gốc và ảnh đã lọc trung bình
cv2.imshow('Anh goc', img)
cv2.imshow('Anh da loc trung binh', img_blur)
cv2.waitKey(0)
cv2.destroyAllWindows()
