import numpy as np
import cv2 as cv

img = cv.imread('/Lab/image/arrows.jpg', 0)
cv.imshow("img",img)
cv.waitKey()