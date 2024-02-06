#코드업 파이썬 기초 100제
#6026
a = float(input())
b = float(input())
sum = a+b
print(sum)
#
#6027
a = int(input())
print('%x'% a)
#
#6028
a = int(input())
print('%X'% a)
#
#6029
a = int(input(), 16)
print('%o'% a)
#
#6030
a = ord(input())
print(a)
#
#6031
a = int(input())
print(chr(a))
#
#6032
a = int(input())
print(-a)
#
#6033
a = ord(input())
print(chr(a+1))
#
#6034
a, b = map(int, input().split())
c = a-b
print(c)
#
#6035
a, b = map(float, input().split())
c = a*b
print(c)
#
#6036
a, b = input().split()
print(a*int(b))
#
#6037
a = int(input())
b = input()
print(b*a)
#
#6038
a, b = map(int, input().split())
c = a**b #python언어에서 제공하는 거듭제곱 계산 연산자
print(c)
#
#6039
a, b = map(float, input().split())
c = a**b
print(c)
#
#6040
a, b = map(int, input().split())
print(a//b) #a를 b로 나눈 몫
#
#6041
a, b = map(int, input().split())
print(a%b) #a를 b로 나눈 나머지
#
#6042
a = float(input())
print(format(a, ".2f")) #소수점 두번 째 자리까지 반올림
#
#6043
a, b = map(float, input().split())
print(format(a/b, ".3f")) #a를 b로 나눈 값을 소수점 
                        #넷째자리 에서 반올림해 출력
#
#6044
a, b = map(int, input().split())
print(a+b)
print(a-b)
print(a*b)
print(a//b)
print(a%b)
print(format(a/b, ".2f"))
#
#6045
a, b, c = map(int, input().split())
print(a+b+c, format((a+b+c)/3, ".2f"), end=' ')
#
#6046
a = int(input())
print(a<<1) #a를 2배 곱함
            #ex)a>>1 -> a의 절반인 5가 출력됨.
#
#6047
a, b = map(int, input().split())
print(a<<b) #a의 b제곱이 출력.
#
#6048
a, b = map(int, input().split())
if(a<b):
    print("True")
else:
    print("False")
#
#6049
a, b = map(int, input().split())
if(a==b): print("True")
else: print("False")
#
#6050
a, b = map(int, input().split())
if(b>=a): print("True")
else: print("False")
#
#6051
a, b = map(int, input().split())
if(a!=b): print("True")
else: print("False")
#
#6052
a = int(input())
print(bool(a)) #1이면 참, 아니면(=0)거짓이 출력
#
#6053
a = bool(int(input()))
print(not a)
#
#6054
a, b = map(int, input().split())
print(bool(a) and bool(b))
#
#6055
a, b = map(int, input().split())
print(bool(a) or bool(b))
#
#6056
a, b = map(int, input().split())
print(bool(a and (not b)) or bool((not a) and b))
#
#6057
a, b = map(int, input().split())
print(bool(a and b) or ((not a) and (not b)))
#
#6058
a, b = map(int, input().split())
print(bool((not a) and (not b)))
#
#6059(비트단위 논리연산)
a = int(input())
print(~a) #if.a=1 -> ~a = -2
#
#6060
a, b = map(int, input().split())
print(a&b) #and
#
#6061
a, b = map(int, input().split())
print(a|b) #or
#
#6062
a, b = map(int, input().split())
print(a^b) #xor
#
#6063
a, b = map(int, input().split())
if(a>b): print(a)
else: print(b)
#
#6064
a, b, c = map(int, input().split())
if(a<b and a<c): print(a)
elif(b<a and b<c): print(b)
else: print(c)
#
#6065
a, b, c = map(int, input().split())
if(a%2==0): print(a)
if(b%2==0): print(b)
if(c%2==0): print(c)
#
#6066
a, b, c = map(int, input().split())
if(a%2==0): print("even")
else: print("odd")
if(b%2==0): print("even")
else: print("odd")
if(c%2==0): print("even")
else: print("odd")
#
#6067
a = int(input())
if a<0:
    if(a%2==0): print('A')
    else: print('B')
if a>0:
    if(a%2==0): print('C')
    else: print('D')
#
#6068
n = int(input())
if(90<=n<=100): print('A')
elif(70<=n<=89): print('B')
elif(40<=n<=69): print('C')
else: print('D')
#
#6071
while(1):
    n = int(input())
    if(n!=0): print(n)
    else: break #만약 n의 값이 0이라면 반복 중지.
#
#6072
a = int(input())
for i in range(a):
    print(a)
    a=a-1
#
#6074
c = ord(input()) #문자를 숫자로 변환
t = ord('a')    #a부터 시작하므로 a=1
while(t<=c): #a부터 c(입력한 값)까지
    print(chr(t), end=' ') #공백을 띄워 출력
    t+=1  #다음 문자를 출력
#
#6076
n = int(input())
for i in range(0, n+1, 1):
    print(i)
#
#6078
while(1):
    c = input()
    if(c=='q'): 
        print(c)
        break
    else: print(c)
#
#6081(16진수 구구단 출력)
a = int(input(), 16)
for i in range(1, 16):
    print("%X*%X=%X"%(a, i, a*i))
#
#6082(3 6 9게임의 왕이 되자)
a = int(input())
for i in range(1, a+1):
    if(i%10==3 or i%10==6 or i%10==9):
        print("X", end=' ')
    else: print(i, end=' ')
#
#6083
a, b, c = map(int, input().split())
for i in range(0, a):
    for j in range(0, b):
        for k in range(0, c):
            print(i, j, k)
print(a*b*c)
#
#6086(거기까지! 이제 그만~)
n = int(input())
sum = 0
for i in range(1, n+1):
    sum+=i
    if(sum>=n): break
print(sum)
#
#6087
n = int(input())
for i in range(1, n+1):
    if(i%3==0): continue
    print(i, end=' ')
#
#6088(수 나열하기 1)
a, b, n = map(int, input().split())
sum = a
for i in range(2, n+1):
    sum += b
print(sum)
#
#6089(수 나열하기 2)
a, r, n = map(int, input().split())
sum = a
for i in range(2, n+1): #이미 sum에 a값이 정의 되었으므로, 2부터 시작해야 한다.
    sum = sum*r
print(sum)
#
#6090(수 나열하기 3)
a, m, d, n = map(int, input().split())
sum = a
for i in range(2, n+1):
    sum = sum*m+d
print(sum)
#
#6091(함께 문제 푸는 날)
a, b, c = map(int, input().split()) #인원 3명의 각각의 방문 주기
d = 1 #(day)날짜 1일부터 시작
while d%a!=0 or d%b!=0 or d%c!=0: #3명중 1명이라도 수업을 듣지 않는다면,
    d+=1    #날짜를 1일 추가해라
print(d)    #아니라면(전부다 수업을 같은 날 듣는다면.) 그 날을 출력하여라.
#
#6092(이상한 출석 번호 부르기1)
n = int(input()) #학생들 수
a = input().split() #공백 기준 a의 리스트 (정수)값 입력받기
for i in range(n):
    a[i]=int(a[i])  #a값을 정수로 다시 입력받기
d=[] 
for i in range(24): 
    d.append(0) #0으로 초기화 된 길이가 24인 리스트 d 생성
for i in range(n): #입력된 숫자들을 순회하면서 
    d[a[i]]+=1  #각 숫자가 등장한 횟수를 d[i]리스트에 누적.
for i in range(1, 24): #0인덱스를 제외한 나머지(1~23)d의 리스트를 출력
    print(d[i], end=' ') #공백으로 나눠서 출력