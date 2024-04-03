# #실습 예제-1
# import cv2
# import numpy as np

# def nothing():
#     pass

# cv2.namedWindow('RCB track bar')
# cv2.createTrackbar('red color', 'RCB track bar', 0, 225, nothing)
# cv2.createTrackbar('green color', 'RCB track bar', 0, 225, nothing)
# cv2.createTrackbar('blue color', 'RCB track bar', 0, 225, nothing)

# cv2.setTrackbarPos('red color', 'RCB track bar', 125)
# cv2.setTrackbarPos('green color', 'RCB track bar', 125)
# cv2.setTrackbarPos('blue color', 'RCB track bar', 125)

# img = np.zeros((512,512,3), np.uint8)

# while(1):
#     redVal = cv2.getTrackbarPos('red color', 'RCB track bar')
#     greenVal = cv2.getTrackbarPos('green color', 'RCB track bar')
#     blueVal = cv2.getTrackbarPos('blue color', 'RCB track bar')
    
#     print(redVal)
    
#     cv2.rectangle(img, (0,0), (512,512), (blueVal, greenVal, redVal), -1)
#     cv2.imshow('RCB track bar', img)

#     if cv2.waitKey(30) & 0xff == 27:
#         break

# #   


# #실습예제-2
# import numpy as np
# import cv2 as cv
# import glob

# nCols = 9
# nRows = 6

# # termination criteria
# criteria = (cv.TERM_CRITERIA_EPS + cv.TERM_CRITERIA_MAX_ITER, 30, 0.001)

# #prepare object points, like  (0,0,0), (1,0,0), (2,0,0) ..., (6,5,0)
# objp = np.zeros((nCols*nRows,3), np.float32)
# objp[:,:2] = np.mgrid[0:nCols,0:nRows].T.reshape(-1,2)

# #Arrays to store object points and image points from all the images.
# objpoints = [] #3d point in real world space
# imgpoints = [] #2d point in image plane.
# images = glob.glob('OpenCV\jpg&png\*.jpg') #opencv->jpg>png 폴더안에 있는 모든 jpg를 찾기

# for fname in images:
#     img = cv.imread(fname)
#     gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
#     #Find the chess board corners
#     ret, corners = cv.findChessboardCorners(gray, (nCols,nRows), None)
#     #if find, add object points, image points(after refining them)
#     if ret == True:
#         objpoints.append(objp)
#         corners2 = cv.cornerSubPix(gray, corners, (11,11), (-1,-1), criteria)
#         imgpoints.append(corners2)

#         cv.drawChessboardCorners(img, (nCols,nRows), corners2, ret)
#         cv.imshow('img', img)
#         cv.waitKey(500)
# cv.destroyAllWindows()

# #Cailbration
# ret, mtx, dist, rvecs, tvecs = cv.calibrateCamera(objpoints, imgpoints, gray.shape[::-1], None, None)

# #Undistoration
# img = cv.imread(images[0])
# h, w = img.shape[:2]
# newcameramtx, roi = cv.getOptimalNsewCameraMatrix(mtx, dist, (w,h), 1, (w,h))

# #cv.undistort
# dst = cv.undistort(img, mtx, dist, None, newcameramtx)

# #crop the image
# x, y, w, h = roi
# dst = dst[y:y+h, x:x+w]
# cv.imwrite('cailbresult.png', dst)

import cv2 as cv
import numpy as np
from matplotlib import pyplot as plt

#그림파일 불러오기
img = cv.imread('puppy.jpg', cv.IMREAD_GRAYSCALE)
assert img is not None, "file could not be read, check with os.path.exists()"