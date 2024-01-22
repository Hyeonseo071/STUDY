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