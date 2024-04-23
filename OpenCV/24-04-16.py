#실습과제-1
import cv2 as cv
import numpy as np
from matplotlib import pyplot as plt

#이미지 불러오기
img = cv.imread('OpenCV\jpg&png\sudoku.jpg', cv.IMREAD_GRAYSCALE)
assert img is not None, "file could not be read, check with os.path,exists()"

#이미지 호림처리
img = cv.medianBlur(img,5)

#이미지 이진화 하기(Global & adaptive)
ret,th1 = cv.threshold(img,127,255,cv.THRESH_BINARY)
th2 = cv.adaptiveThreshold(img,255,cv.ADAPTIVE_THRESH_MEAN_C,cv.THRESH_BINARY,11,2)
th3 = cv.adaptiveThreshold(img,255,cv.ADAPTIVE_THRESH_GAUSSIAN_C,cv.THRESH_BINARY,11,2)

#결과 출력하기
titles = ['Original Image', 'Global Thresholding (v = 127)', 'Adaptive Mean Thresholding', 'Adaptive Gaussian Thresholding']
images = [img, th1, th2, th3]
for i in range(4):
    plt.subplot(2,2,i+1),plt.imshow(images[i],'gray')
    plt.title(titles[i])
    plt.xticks([]),plt.yticks([])
plt.show()


# #실습과제-2
# import cv2 as cv
# from matplotlib import pyplot as plt

# img1 = cv.imread('images/img1.png')     #사이즈가 같은 두사진을 선정해야함.
# img2 = cv.imread('images/img2.png')

# #cv.add ( src1, src2[, dst[, mak[, dtype]]] ) -> dst
# img3 = cv.add(img1, img2)

# #cv.addweighted (src1, alpha, src2, beta, gamma[, dst[, dtype]] ) -> dst
# img4 = cv.addWeighted(img1, 0.5, img2, 0.5, 0)

# titles = ['src', 'map', 'add', 'addweight']
# imgs = [img1, img2, img3, img4]

# for i in range(4):
#     plt.subplot(2,2,i+1)
#     plt.imshow(imgs[i])
#     plt.title(titles[i])
#     plt.xticks([])
#     plt.yticks([])
# plt.show()

# #####

#실습과제-3
import  numpy as np
import cv2
from matplotlib import pyplot as plt

img1 = cv2.imread('./../images/img1.jpg')
img2 = cv2.imread('./../images/img2.jpg')
img3 = cv2.imread('./../images/img3.jpg')
img4 = cv2.imread('./../images/img4.jpg')
img5 = cv2.imread('./../images/img5.jpg')

print(img5.shape)

#마스크 선언 및 초기화
mask = np.full(shape=img5.shape, fill_value=0, dtype=np.uint8)
h, w, c =  img5.shape
x = (int)(w/2)-60; y = (int)(h/2)-60
cv2.rectangle(mask, (x,y), (x+120, y+120), (255, 255, 255), -1)

#산술논리 및 연산수행
ress = []

ress.append(cv2.add(img1, img2))
ress.append(cv2.addWeighted(img1, 0.5, img2, 0.5, 0))
ress.append(cv2.subtract(img3, img4))
ress.append(cv2.absdiff(img3, img4))
ress.append(cv2.bitwise_not(img5))
ress.append(cv2.bitwise_and(img5, mask ))

#결과 영상 출력
titles = []
titles.append('imput1')
titles.append('imput2')
titles.append('imput3')
titles.append('imput4')
titles.append('imput5')
titles.append('mask')

titles.append('add')
titles.append('addweight')
titles.append('substrack')
titles.append('absdiff')
titles.append('bitwise_not')
titles.append('bitwise_and')

images = [img1, img2, img3, img4, img5, mask, ress[0], ress[1], ress[3], ress[4], ress[5]]

for i in range(12):
    plt.subplot(2, 6, i+1),plt.imshow(images[i])
    plt.title