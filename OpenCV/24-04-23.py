# import numpy as np
# import cv2
# from matplotlib import pyplot as plt

# CAMERA_ID = 0
# cam = cv2.VideoCapture(CAMERA_ID)
# if cam.isOpened() == False:
#     print('Cannot open the camera-id' % (CAMERA_ID))    #예외처리
#     exit()

# cv2.namedWindow("gray_frame") #창의 새로운 이름 부여

# background = None  # 배경 프레임을 저장할 변수

# while(True):
#     ret, frame = cam.read() #ret:성공여부, frame:현재 영상 프레임
    
#     if not ret:
#         print("Failed to capture frame")
#         break

#     # 회색영상으로 변환
#     gray_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)    #추출한 frame으로부터 색을 부여(회색)
#     cv2.imshow("gray_frame", gray_frame) #변수명과 창의 이름을 동일시 시켜주기
#     key = cv2.waitKey(100)

#     # 키보드 'a'를 입력시, 배경촬영
#     if key == ord('a'):
#         _, background = cam.read()  # 성공여부 무시, 할당.
#         print('Background captured successfully!')




#     # 키보드 'q'를 입력시, 실행 중지
#     if key == ord('q'):
#         break

#     # 키보드 'b'를 누를시 이진화가 실행
#     if key == ord('b'):
#         if background is not None:
#             ret, th1 = cv2.adaptiveThreshold(frame, 255, cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,11,2)
#             titles = ['Original', 'th1']
#             images = [frame, th1]
#             for i in range(2):
#                 plt.subplot(2,2,i),plt.imshow(frame[i],'gray')
#                 plt.title(titles[i])
#                 plt.xticks([]),plt.yticks([])
#             plt.show()


# # 카메라 리소스 반환
# cam.release()
# cv2.destroyAllWindows()

#모범 답안
import cv2 as cv
import numpy as np
from matplotlib import pyplot as plt

CAMERA_ID = 0

cam = cv.VideoCapture(CAMERA_ID)
if cam.isOpened() == False:
    print
    'Cannot open the camera-%d' % (CAMERA_ID)
    exit()

cv.namedWindow('CAM Window')

while(True):
    ret, frame = cam.read()
    cv.imshow('CAM Window', frame)
    key = cv.waitKey(33)
    if key == ord('a'):
        a = frame
        break

while(True):
    ret, frame = cam.read()
    diff = cv.absdiff(frame, a)
    _, diff = cv.threshold(diff, 30, 255, cv.THRESH_BINARY)
    cv.imshow('CAM Window', diff)
    key = cv.waitKey(33)
    if key == ord('q'):
        break