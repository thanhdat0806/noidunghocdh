import cv2
import numpy as np
#a
# Load ảnh từ file
img = cv2.imread('C:/Users/Admin/Desktop/xulyanh/london.jpg')

# Áp dụng bộ lọc Laplacian
laplacian = cv2.Laplacian(img, cv2.CV_64F)

# Áp dụng ngưỡng để tìm biên
thresh = 100
edges = cv2.threshold(laplacian, thresh, 255, cv2.THRESH_BINARY)[1]

# Hiển thị ảnh và biên đã được tìm thấy
cv2.imshow('anh goc', img)
cv2.imshow('Anh da loc Laplacian', laplacian)
cv2.imshow('Anh Bien anh', edges)
cv2.waitKey(0)
cv2.destroyAllWindows()
