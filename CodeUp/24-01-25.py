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