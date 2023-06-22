import cv2

# read image
img = cv2.imread('london.jpg')

# image dimension
print('img.shape:', img.shape)

# replace blue channel with zero
img[:,:,0] = 0

# write / save modified image
cv2.imwrite('london_yellow.jpg', img)
