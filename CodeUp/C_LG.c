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