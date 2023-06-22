import cv2
import numpy as np
#a
# Load ảnh từ file
img = cv2.imread('C:/Users/Admin/Desktop/xulyanh/london.jpg')

# Hiển thị ảnh
cv2.imshow('Anh goc', img)
cv2.waitKey(0)
cv2.destroyAllWindows()
