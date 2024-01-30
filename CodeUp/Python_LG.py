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
print(a&b) 