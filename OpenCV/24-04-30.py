# import cv2
# import numpy as np
# from matplotlib import pyplot as plt

# #영상 읽기
# img1 = cv2.imread("OpenCV\jpg&png\sudoku.jpg", cv2.IMREAD_GRAYSCALE)

# if img1 is None:
#     print('no file found')
#     exit()

# #영상 명암비 조절 변수 선언 및 초기화
# multi_lut = np.full(shape=[256], fill_value=0, dtype=np.uint8)
# log_lut = np.full(shape=[256], fill_value=0, dtype=np.uint8)
# invol_lut = np.full(shape=[256], fill_value=0, dtype=np.uint8)
# sel_lut = np.full(shape=[256], fill_value=0, dtype=np.uint8)

# multi_v = 2; gamma1 = 0.1; gamma2 = 0.6
# thres1 = 5; thres2 = 100

# max_v_log = 255 / np.log(1+255)
# max_v_invol = 255 / np.power(255, gamma1)
# max_v_sel = 200 / np.power(thres2, gamma2)

# for i in range(256):
#     val = i * multi_v

#     if val > 255 : val = 25
#     multi_lut[i] = val
#     log_lut[i] = np.round(max_v_log * np.log(1+i))
#     invol_lut[i] = np.round(max_v_invol * np.power(i, gamma1))\
    
#     if i<thres1 :sel_lut[i] = i
#     elif i > thres2 : sel_lut[i] = i
#     else: sel_lut[i] = np.round(max_v_sel * np.power(i, gamma2))

# #명암비 조절(LUT 적용)
# ress = []
# ress.append(img1)
# ress.append(cv2.LUT(img1, multi_lut))
# ress.append(cv2.LUT(img1, log_lut))
# ress.append(cv2.LUT(img1, invol_lut))
# ress.append(cv2.LUT(img1, sel_lut))

# #결과 영상 출력
# titles = ['입력영상', '상수곱', '로그변환', '거듭제곱 변환', '구간 변환']

# plt.rc('font', family='Malgun Gothic')
# for i in range(5):
#     plt.subplot(2,3,i+1)
#     plt.imshow(ress[i], cmap='gray')
#     plt.title(titles[i])
#     plt.xticks([]),plt.yticks([])

# plt.show()

#예제2
# import cv2
# import numpy as np
# from matplotlib import pyplot as plt

# #영상읽기
# img1 = cv2.imread("OpenCV\jpg&png\sudoku.jpg", cv2.IMREAD_GRAYSCALE)

# #히스토그램 평활화 및 히스토그램 계산
# res1 = cv2.equalizeHist(img1)
# ch1 = [0]; ranges1 = [0, 256]; histSize1 = [256]
# hist1 = cv2.calcHist([img1], ch1, None, histSize1, ranges1)
# hist2 = cv2.calcHist([res1], ch1, None, histSize1, ranges1)

# #산수곱, 로그곱, 거듭제곱 변환 기반 명암비 조절 및 히스토그램 계산
# multi_lut = np.full(shape=[256], fill_value=0, dtype=np.unint8)
# log_lut = np.full(shape=[256], fill_value=0, dtype=np.unint8)
# invol1_lut = np.full(shape=[256], fill_value=0, dtype=np.unint8)
# multi_v = 2; gamma1 = 0.4
# thres1 = 5; thres2 = 100
# max_v_log = 255 / np.log(1 + 255)
# max_v_invol1 = 255 / np.power(255, gamma1)

# for i in range(256):
#     val = i * multi_v
#     if val > 255 : val = 255
#     multi_lut[i] = val
#     log_lut[i] = np.round(max_v_log * np.log(1+i))
#     invol1_lut[i] = np.round(max_v_invol1 * np.power(i, gamma1))

# #명암비 조절
# res2 = cv2.LUT(img1, multi_lut)
# res3 = cv2.LUT(img1, log_lut)
# res4 = cv2.LUT(img1, invol1_lut)

# hist3 = cv2.calcHist([res2], ch1, None, histSize1, ranges1)
# hist4 = cv2.calcHist([res3], ch1, None, histSize1, ranges1)
# hist5 = cv2.calcHist([res4], ch1, None, histSize1, ranges1)

# #히스토그램 출력 및 결과 저장
# bin_x = np.arange(256)
# fig_index = 0

# ress = []
# ress.append(img1)
# ress.append(res1)
# ress.append(res2)
# ress.append(res3)
# ress.append(res4)

# titles = ["Input Histogram", "Equalization-convert Histogram", "Multiply-convert Histogram", "log-convert Histogram", "Invil-convert Histogram"]

# for i in range(5):
#     plt.subplot(2,3,i+1)
#     plt.imshow(ress[i], cmap='gray')
#     plt.title(titles[i])
#     plt.xticks([]), plt.yticks([])

# plt.show()

#예제3
import numpy as np
import cv2
from matplotlib import pyplot as plt

#영상읽기
img1 = cv2.imread("OpenCV\jpg&png\sudoku.jpg", cv2.IMREAD_GRAYSCALE)

#필터 정의 및 블러링 수행
ksize1 = 3; ksize2 = 5; ksize3 = 7; ksize4 = 9
kernel = np.full(shape=[ksize4,ksize4], fill_value=1, dtype=np.float32) / (ksize4*ksize4)
res1 = cv2.blur(img1, (ksize1, ksize1))
res2 = cv2.blur(img1, (ksize2, ksize2))
res3 = cv2.boxFilter(img1, -1, (ksize3, ksize3))
res4 = cv2.filter2D(img1, -1, kernel)
res5 = cv2.boxFilter(img1, -1, (1,21))
ress = []
ress.append(img1), ress.append(res1), ress.append(res2)
ress.append(res3), ress.append(res4), ress.append(res5)

titles = ['Input', 'res1', 'res2', 'res3', 'res4', 'res5']

for i in range(6):
    plt.subplot(2,3,i+1)
    plt.imshow(ress[i], cmap='gray')
    plt.title(titles[i])
    plt.xticks([]), plt.yticks([])
plt.show()