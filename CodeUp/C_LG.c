//C기초 100제 
//1024
#include<stdio.h>
int main(){
    char h[20];
    scanf("%s", &h);
    for(int i=0; h[i]!='\0'; i++){
        printf("'%c'", h[i]);
        printf("\n");
    }

    return 0;
}

//__________
//1038
#include<stdio.h>
int main(){
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a+b);

    return 0;
}
//
//1039
#include<stdio.h>
int main(){
    long long int a, b;
    long long int sum = 0;
    scanf("%lld %lld", &a, &b);
    sum = a + b;
    printf("%lld", sum);

    return 0;
}
//
//1044
#include<stdio.h>
int main(){
    long long int n;
    scanf("%lld", &n);

    printf("%lld", n+1);
    return 0;
}
//
//1046
#include<stdio.h>
int main(){
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n", a+b+c);
    printf("%.1f", (float)(a + b + c) / 3); //소수점 한자리 나타내기
    return 0;
}
//
//1059
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n); //if n=1
    printf("%d", ~n); //n=-2가 출력된다.

    return 0;
}
//
//1060
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b); // a=3(0011), b=5(0101)
    printf("%d", a & b); // 1

    return 0;
}
//
//1061
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b); //if. a=3, b=5
    printf("%d", a|b); // 7

    return 0;
}
//
//1062
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b); //if. a=3, b=5
    printf("%d", a^b); // 6

    return 0;
}
//
//1080
#include<stdio.h>
int main(){
    int n, i;
    int sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        sum += i;
        if(sum>=n){
            break;
        } 
    }
    printf("%d", i);

    return 0;
}
//
//1081
#include<stdio.h>
int main(){
    int i, j;
    int a, b;
    scanf("%d %d", &a, &b);
    for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){
            printf("%d %d\n", i, j);
        }
    }

    return 0;
}
//
//1082
#include<stdio.h>
int main(){
    int n, i;
    scanf("%X", &n);
    for(i=1; i<=15; i++){
        printf("%X*%X=%X\n", n, i, n*i);
    }

    return 0;
}
//
//1084
#include<stdio.h>
int main(){
    int i, j, k;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            for(k=0; k<c; k++){
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    printf("%d", i*j*k);

    return 0;
}
//
//1089
#include<stdio.h>
int main(){
    int i, a, b, n;
    int sum = 0;
    scanf("%d %d %d", &a, &b, &n);
    sum = a;
    for(i=2; i<=n; i++){
        sum += b;
    }
    printf("%d", sum);
    
    return 0;
}
//
//1087
#include<stdio.h>
int main(){
    int n, i, sum=0;
    scanf("%d", &n);
    for(i=1;; i++){
        sum += i;
        if(sum>=n) break;
    }
    printf("%d", sum);

    return 0;
}
//
//1088
#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(i%3==0) continue;
        printf("%d ", i);
    }

    return 0;
}
//
//1090
#include<stdio.h>
int main(){
    long long int a, r, n;
    int i;
    scanf("%lld %lld %lld", &a, &r, &n);
    for(i=1; i<n; i++){
        a *= r;
    }
    printf("%lld", a);
    return 0;
}
//
//1091
#include<stdio.h>
int main(){
    long long int a, m, d, n , i;
    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
    for(i=1; i<n; i++){
        a = a*m+d;
    }
    printf("%lld", a);
    return 0;
}
//
//1253
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int min = a < b ? a : b;  //최소값 구하기
    int max = a > b ? a : b;  //최대값 구하기

    for(int i=min; i<=max; i++){
        printf("%d ", i);
    }
    return 0;
}
//
//1257
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        if(i%2==1) printf("%d ", i);
    }
    return 0;
}
//
//1260
#include<stdio.h>
int main(){
    int a, b, sum=0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        if(i%3==0) sum += i;
    }
    printf("%d", sum);
    return 0;
}
//
//1008(특수문자 출력하기)
#include<stdio.h>
int main(){
    printf("\u250c\u252c\u2510\n");
    printf("\u251C\u253C\u2524\n");
    printf("\u2514\u2534\u2518\n");

    return 0;
}
//
//1112(두 정수 출력)
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", a, b);

    return 0;
}
//
//1113(바꿔서 출력하기)
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", b, a);
    return 0;
}
//1114(두 정수의 덧셈)
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a+b);
    return 0;
}
//
//1115(64비트 덧셈)
int main(){
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a+b);
    return 0;
}
//
//1116(사칙연산 계산기)
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a+b);
    printf("%d-%d=%d\n", a, b, a-b);
    printf("%d*%d=%d\n", a, b, a*b);
    printf("%d/%d=%d\n", a, b, a/b);
    return 0;
}
//
//1111(출력)
#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    printf("%d%%", a);

    return 0;
}
//
//1110(정수 그대로 출력)
#include<stdio.h>
void main(){
    int a;
    scanf("%d", &a);
    printf("%d", a);
}
//
//1120(세 수의 평균)
#include<stdio.h>
void main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%.2f", (float)(a+b+c)/3.0);
}
//
//1085(소리파일 저장용량 계산하기)
#include<stdio.h>
void main(){
    long long int h, b, c, s;
    double sum = 0;
    scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
    sum = (float)(h*b*c*s);
    printf("%.1lf MB", sum/(8*1024*1024));

}
//
//1117(두 실수의 곱)
#include<stdio.h>
void main(){
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.2f", a*b);
}
//
//1165(축구의 신)
#include<stdio.h>
void main(){
    int time, n, sum = 0;
    scanf("%d %d", &time, &n);
    sum += n;
    for(int i=time; i<90; i+=5){
        sum += 1;
        if(i==90) break;
    }
    printf("%d", sum);

}
//
//1167
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // 세 수를 오름차순으로 정렬
    if (a > b) { //b가 a보다 작을 경우.
        int temp = a; 
        a = b;  //(a==b)
        b = temp;   //a와 b값을 바꾸기(b==a)
    }
    if (b > c) { //만약 c가 b보다 작을 경우
        int temp = b; 
        b = c; //(b==c)
        c = temp;   //c와 b의 값 바꾸기(c==b)
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    // 두 번째 수 출력
    printf("%d\n", b);
    return 0;
}
//
//1171(당신의 학번은?)
#include <stdio.h>
int main (void)
{
    
    int grade , class, num;
    scanf("%d %d %d",&grade, &class, &num);
    printf("%d%02d%03d",grade,class,num);
 
    return 0;
}