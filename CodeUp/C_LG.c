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
//
//1139(논리 연산자 AND)
#include<stdio.h>
void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a==1 && b==1){
        printf("1");
    }
    else printf("0");
    
}
//
//1121(나머지 구하기)
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a%b);

    return 0;
}
//
//1122(초를 분/초로 변환)
#include<stdio.h>
void main(){
    int s, num=0, sum2=0;
    scanf("%d", &s);
    num = s/60;
    sum2 = s%60;
    printf("%d %d", num, sum2);
}
//
//1125(8진수 16진수 변환)
#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    printf("%o %X", n, n);
}
//
//1131(문자 출력하기)
#include<stdio.h>
void main(){
    char a;
    scanf("%c", &a);
    printf("%c", a);
}
//
//1132(문자열 출력하기)
#include<stdio.h>
void main(){
    char a[8];
    scanf("%s", &a);
    printf("%s", a);
}
//1133(공백이 있는 문자열 입출력)
#include<stdio.h>
void main(){
    char str[31];
    fgets(str, 31, stdin);
    printf("%s", str);
}
//
//1135(관계연산자1)
#include<stdio.h>
void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(b<=a) printf("1");
    else printf("0");
}
//
//1136(관계연산자2)
#include<stdio.h>
void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a==b) printf("1");
    else printf("0");
}
#include<stdio.h> //(관계연산자3)
void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a==b) printf("0");
    else printf("1");
}
//
//
#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    printf("%d", !n);
}
//
//1147(<<)
#include<stdio.h>
void main(){
    int a, x;
    scanf("%d %d", &a, &x);
    printf("%d", a<<x);
}
//
//1149(두수 중 큰수)
#include<stdio.h>
void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>b) printf("%d", a);
    else printf("%d", b);
}
//
//1150(세수 중 가장 작은 수 )
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    printf("%d\n", min);

    return 0;
}
//
//1168(나이계산 1)
#include<stdio.h>
void main(){
    int a, b; 
    scanf("%d %d", &a, &b); //생년월일 입력
    a/=10000; //몫 = 년도만 따로 나눠 저장.
    if(b==1 || b==2){ //성별이 1 또는 2라고 한다면
        printf("%d", 2012-(1900+a)+1); //1900년대 나이출력
    }
    else printf("%d", 2012-(2000+a)+1); //반대(3 또는 4)라면 2000년대 나이 출력
}
//
//1169(나이 계산 2)

#include <stdio.h>
void main()
{ 
    int front, rear, age; //각각 년도, 정수값, 현 나이
    scanf("%d",&age);   //나이 값 입력 받기
    if(age >13){ //만약 2000년대 이전에 태어났으면
        front = 112 -age + 1; //년도 계산
        rear = 1;
        printf("%d %d",front, rear); //년도와 숫자 1 출력
    }
    else{   //아니라면(2000년대 이후에 태어났다면)
        front = 12-age+1; //년도 계산
        rear = 3;
        printf("%d %d",front, rear);
    }
}
//
//1172(세 수 정렬하기)
#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a<=b && a<=c){
        if(b<=c) printf("%d %d %d", a, b, c);
        else printf("%d %d %d", a, c, b);
    }
    else if(b<=a && b<=c){
        if(a<=c) printf("%d %d %d", b, a, c);
        else printf("%d %d %d", b, c, a);
    }
    else{
        if(a<=b) printf("%d %d %d", c, a, b);
        else printf("%d %d %d", c, b, a);
    }
    return 0;
}
//
//1173(30분 전)
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(b-30<0){
        if(a==0) a = 23;
        else a -= 1;
        b = (60+b)-30;
        printf("%d %d", a, b);   
    }
    else{
        b -= 30;
        printf("%d %d", a, b);
    }
    return 0;
}
//
//1266(n개의 수의 합)
#include<stdio.h>
void main(){
    int n, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int a[i];
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%d", sum);
}
//
//1092(함께 문제 푸는 날)
#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int day=1;
    while (day%a!=0 || day%b!=0 || day%c!=0)
    {
        day++;     
    }
    printf("%d", day);
    return 0;
}
//
//1254(알파벳 출력하기)
#include<stdio.h>
void main(){
    char a, b;
    scanf("%c %c", &a, &b);
    for(int i=a; i<=b; i++){
        printf("%c ", i);
    }
}
//
//1255(두 실수 사이 출력하기)
#include<stdio.h>
int main(){
    double a,b;
    scanf("%lf %lf", &a, &b);
    for(double i = a; i <= b; i+=0.01){
        printf("%.2lf ",i);
    } 
    return 0;
}
//
//1267(n개의 수 중 5의 배수의 합)
#include<stdio.h>
void main(){
    long long int n, sum=0;
    scanf("%lld", &n);
    long long int a[1000];
    for(int i=0; i<n; i++){
        scanf("%lld ", &a[i]);
        if(a[i]%5==0){
            sum += a[i];
        }
    }
    printf("%lld", sum);
}
//
//1268(n개의 수 중 홀수의 개수)
#include<stdio.h>
int main(){
    int n, sum=0;
    scanf("%d", &n);
    int *a = (int*)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]%2!=0){
            sum += 1;
        }
    }
    printf("%d", sum);
    free(a);
    return 0;
}
//
//1269(수열의 값 구하기)
#include<stdio.h>
int main(){
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n); 
    int term = a; // 첫 번째 항은 a   
    for(int i=1; i<n; i++){
        term = term * b + c; // 수열의 다음 항 계산
    }
    printf("%d", term);
    return 0;
}
//
//1731(특수 서식 문자 출력하기)
#include<stdio.h>
void main(){
    printf("special characters\n");
    printf("[\\n,\\\",\\\\] is very important.");
    return 0;
}
//
//1261(스페셜 저지 문제)
#include<stdio.h>
int main(){
    int n = 10;
    int a[50];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]%5==0){  //a[i]가 5의 배수가 맞으면
            printf("%d", a[i]); //그 수중 하나만 출력하기
            break; //그리고 멈추기
        }
        else printf("0"); //5의 배수가 하나도 없다면 0만 출력하기
    }
    return 0;
}
//
//1270(1의 개수는? 1)
#include<stdio.h>
int main(){
    int n, sum=0;
    scanf("%d", &n); //반복할 수 입력받기
    for(int i=1; i<=n; i++){ 
        if(i%10==1){ //만약 10으로 나눴을 때 나머지가 1이라면,
            sum += 1; //sum에 1을 더하기(나온 개수)
        }
    }
    printf("%d", sum); //sum 출력하기
    return 0;
}
//
//1271(최대값 구하기)
#include<stdio.h>
int main(){
    int n, term=0;
    scanf("%d", &n);    //받을 개수 입력받기
    int a[n];  
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]); //차례대로 배열 입력받기
        if(term<a[i]){ //만약 term보다 a[i]의 값이 크다면 
            term = a[i]; //term을 a[i]로 덮어쓰기
        }
    }
    printf("%d", term); //term(최대값)출력하기
    return 0;
}
//
//1272(기부)
#include<stdio.h>
int main(){
    int a, b;
    

    return 0;
}
//
//1351(구구단 출력하기)
#include<stdio.h> //만약 2 5가 입력된다면?(2부터 5단까지 출력해야함.)
int main(){
    int a, b;
    scanf("%d %d", &a, &b); //a부터 b단까지 입력받기
    for(int i=a; i<=b; i++){ //구구단 앞자리 출력하는 동안에
        for(int j=1; j<=9; j++){
            printf("%d*%d=%d\n", i, j, i*j); //구구단 한줄씩 출력
        }
    }
    return 0;
}
//
//1352(사각형 출력하기1)
#include<stdio.h> //n개의 별과 n개의 줄이 출력되어야 하면
int main(){      //어떻게 해야 할까?
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){ //n개의 가로줄
        for(int j=1; j<=n; j++){ //n개의 세로줄
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//
//1354(삼각형 출력하기2)
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n); //길이 n 입력받기
    for(int i=1; i<=n; i++){  //세로줄
        for(int k=i; k<=n; k++){
            printf("*"); //별 출력
        }
        for(int j=1; j<i; j++){ //공백출력
            printf(" ");
        }
        printf("\n"); //줄바꿈
    }
    return 0;
}
//
//1355(삼각형 출력하기 3)
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf(" "); //공백출력
        }
        for(int k=0; k<n-i; k++){
            printf("*"); //별(역삼각형)출력
        }
        printf("\n"); //줄바꿈
    }
    return 0;
}
//
//1356(사각형 출력하기 2)
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            if(k==0 || k==n-1 || i==0 || i==n-1){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
//
//1357(삼각형 출력하기4)
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    //삼각형 높이까지 출력
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    //삼각형 1줄씩 줄어들어 출력
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// //
// //1358(삼각형 출력하기 5)
// #include<stdio.h>
// int main(){
//     int n;
//     if(n%2==1){
//         scanf("%d", &n);
//     }
//     for(int i=0; i<n; i++){

//     }



//     return 0;
// }