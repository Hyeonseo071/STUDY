collection = ["apple", "melon", "orange", "grape"]
for furuit in collection:
    print(furuit)
print("------------------------")

num = 0
for num in range(5):
    print(num)
print("------------------------")

num = 0
for num in range(0, 9, 2):
    print(num)
print("------------------------")

arr = []
for i in range(5):
    arr.append(i)
print(arr)
print("------------------------")

#실행 결과 : 
# apple
# melon
# orange
# grape
# ------------------------
# 0
# 1
# 2
# 3
# 4
# ------------------------
# 0
# 2
# 4
# 6
# 8
# ------------------------
# [0, 1, 2, 3, 4]

def caffe(beverage, *arguments, **keywords):
    print("Do you have any", beverage, "?")
    for arg in arguments:
        print(arg)
    print("*****")
    for kw in keywords:
        print(kw, ":", keywords[kw])

caffe("coffee", "it's yummy, sir.", "Would you try",
    barista = "Jay Kim",
    client = "BSSM",
    cup = "venti-size")

#실행 결과 :
# Do you have any coffee ?
# it's yummy, sir.
# Would you try
# *****
# barista : Jay Kim
# client : BSSM
# cup : venti-size

import os
os.system('clear')
nation = {'Korean':"+82", 'US':"+1", 'Japan':"+81"}

print(nation['Korean'])

var = input()
#if('US' in nation)
if(var in nation):
    print('country code =', nation[var])
else:
    print('something wrong~!')

# 실행결과 :
# +82
# US //var의 입력값.
# country code = +1 //출력값
    
class Parents:
    num = 0
    #constructor(생성자)
    def __init__(self, num) -> None:
        self.num = num
        print('Constructor of the parent class was called.')

class Child(Parents):
    def __init__(self, num) -> None:
        super().__init__(num)
        print('Constructor of the child class was called.')
    #child에만 추가된 함수
    def displayValue(self):
        print('num :', self.num)

cd = Child(20)
cd.displayValue()



#일반적 getter, setter 사용
class Dog:
    def __init__(self) -> None:
        self.__ownernames = "default name"
    
    @property
    def name(self):
        return self.__ownernames
    
    @name.setter
    def name(self, name):
        self.__ownernames = name

# 클래스 정의 블록 종료 후에 인스턴스 생성 가능
mydog = Dog()
mydog.name = "Buddy"
print(mydog.name)  # 출력: Buddy


