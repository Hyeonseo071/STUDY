#모범답안
import numpy as np
import cv2

def nothing(x):
    pass

def apply_filter(frame, kernel_size):
    if kernel_size % 2 == 0:  # Ensure odd kernel size
        kernel_size += 1
    return cv2.GaussianBlur(frame, (kernel_size, kernel_size), 0)

CAMERA_ID = 0
cam = cv2.VideoCapture(CAMERA_ID)
if not cam.isOpened():
    print('Cannot open the camera-%d' % CAMERA_ID)
    exit()

cv2.namedWindow('CAM Window')
cv2.createTrackbar('Filter', 'CAM Window', 1, 100, nothing)  # Adjust range as needed

while True:
    ret, frame = cam.read()
    if not ret:
        print('Failed to capture frame')
        break
    
    kernel_size = cv2.getTrackbarPos('Filter', 'CAM Window')
    if kernel_size < 1:
        kernel_size = 1

    filtered_frame = apply_filter(frame, kernel_size)

    cv2.imshow('CAM Window', filtered_frame)
    
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cv2.destroyAllWindows()
cam.release()