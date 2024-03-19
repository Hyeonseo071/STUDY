# from socket import *
# Host = '10.129.57.177'
# Port = 9999

# server_socket = socket(AF_INET, SOCK_STREAM)
# server_socket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
# server_socket.bind((Host, Port))

# print("listening. . .")
# server_socket.listen()

# client_socket, addr = server_socket.accept()
# print("Connected by", addr)

# while True:
#     data = client_socket.recv(1024)
#     if not data:
#         break
#     print('Received from', addr, data.decode())
#     client_socket.sendall(data)

# client_socket.close()
# server_socket.close()

# ##
# from socket import *

# Host = '10.129.57.177'
# Port = 9999

# client_socket = socket(AF_INET, SOCK_STREAM)
# client_socket.sendall('안녕!!'.encode())

# data = client_socket.recv(1024)
# print("Received from", repr(data.decode()))

# client_socket.close()


# ###
# import cv2 as cv

# img = cv.imread('JJang.jpg')

# height = img.shape[0]
# width = img.shape[1]

# for y in range(0, height):
#     # 세로방향 직선(빨간선)
#     img.itemset((y, int(width/2), 0), 0)
#     img.itemset((y, int(width/2), 1), 0)
#     img.itemset((y, int(width/2), 2), 255)

# # 가로방향 직선(파란선)
# for x in range(0, width):
#     img.itemset((int(height/2), x, 0), 255)
#     img.itemset((int(height/2), x, 1), 0)
#     img.itemset((int(height/2), x, 2), 0)

# cv.imshow('result', img)
# cv.waitKey(0)
# cv.destroyAllWindows()

###동영상 읽기 가능
import os
import cv2

# print(os.getcwd())

# cap = cv2.VideoCapture('video2.mp4')

# while cap.isOpened():
#     success, frame = cap.read()
#     if success:
#         cv2.imshow('image', frame)

#         key = cv2.waitKey(30) & 0xFF

#         #시간을 늦추면 어떻게 될까요?
#         #key = cv2.waitkey(100) & 0xFF
#         if( key== 27):
#             break
#         else:
#             break
# #다 썼으면 release 해주세용.
# cap.release()

# #창 닫고 끝내기
# cv2.destroyAllWindows()

#원하는 크기로 지정하기
# def draw_rect(event, x, y, flags, param):
#     print(event)
#     #L버튼
#     if event == cv2.EVENT_LBUTTONDOWN:
#         cv2.rectangle(img, (x,y), (x+50, y+50), (255, 0, 0), -1)

# img = np.zeros((512, 512, 3), np.uint8)
# cv2.namedWindow('image')
# cv2.setMouseCallback('image', draw_rect)
# while(1):
#     cv2.imshow('image', img)
#     if cv2.waitKey(1) & 0xFF == 27:
#         break

# cv2.destroyAllWindows()

#노트북 웹캠
# CAMERA_ID = 0
# cam = cv2.VideoCapture(CAMERA_ID)
# if cam.isOpened() == False:
#     print('Cannot open the camera-%d' % (CAMERA_ID))
#     exit()

# cv2.namedWindow('CAM Window')

# while(True):
#     ret, frame = cam.read()
#     cv2.imshow('CAM Window', frame)

#     if cv2.waitKey(10) > 0:
#         break
# cam.release()
# cv2.destroyAllWindows()

