4차시

저번 시간에 딥하게 배운 포인터와 겉핥기식으로 배운 구조체에 이어, 이번 시간엔 구조체에 대해
저번보다 더 푹 찍어 먹어볼 시간이었다. 일단 구조체는 왜 사용하는 것일까? 그 이유에 대해 단순히 말하자면 개발할 때의 편의성 및 유지보
수를 위해서 사용하는 것이라고 할 수 있다. 여러 변수를 사용하는 긴 코드 같은 경우 컴파일러는 메모리의 공간을 최대한 효율적으로 정렬하려
는 특성이 있다(최적화). 이는 메모리의 공간이 확보될수록 공간 효율이 높아져 실행되는 프로그램이
원활하게 작동될 수 있기 때문이다. -> 구조체는 코드의 중복성을 줄이고 구조체라는 공간 안에 여
러 자료형의 변수들을 선언해 사용할 수 있어 메모리를 보다 효율적으로 정렬시켜 주기 때문에 적극
적으로 사용하는 것이 좋다고 한다.
(컴퓨터가 높은 효율성을 중시하는 만큼 우리 개발자도 그에 맞춰 어떻게 하면 더 효율이 극대화 될
수 있는 코드를 작성할 수 있는지 많은 고민과 고민을 거쳐야 하는 태도를 가져야 한다고 생각이 든
다.)
구조체의 장점은 이것뿐만이 아니고, 포인터 변수도 선언할 수 있다는 장점이 있다. 단점으로는 선언할 때 typedef를 따로 작성해두지 않으면 일일이 struct를 변수 앞에 붙여야 하는
불편함이 있다. 그래서 나는 typedef를 항상 타이핑 하면서 익히는 등 습관화해 두기로 하였다. 이날 배운 새로운 개념중엔, MCU에서 구조체의 선언시 멤버변수의 순서도가 중요하단 것이었다. 이 말이 도대체 무슨말이냐 하면은, 예를들어 한 구조체를 선언시 char -> int -> short 순서로 구
조체를 선언한 것보다 char -> short -> int 의 순서로 선언한 것이 데이터 공간을 더 절약할 수
있다는 말이었다. ->구조체의 멤버 변수들이 일정한 간격으로 배치되도록 추가되는 빈 공간을 바로 패딩이라고 하는데
이때 첫 번째 구조체의 두 번째 구조체의 패딩값은 각각 3바이트와 2바이트 이므로
따라서 두 번째 구조체가 데이터 공간을 좀 더 절약하며 사용 할 수 있다는 의미인 것이다. 사실 수업을 들으면서 노트에 필기하는 것에 바빠 패딩에 관한 내용을 제대로 듣지 못해서 이해를
잘 못하고 넘어갔었다... 그래서 따로 찾아 공부해보니 그제야 패딩의 정의와 활용에 대해 잘 짚고
넘어갈 수 있었다. 그리고 수업 중간에 갑자기 뜻밖의 과제를 받고야 말았다. 구조체 연습 예제인데, 제공되는 코드와
그에 맞춰서 함수 코드를 우리가 따로 작성해야 되는 과제 였었다. 내가 작성해야 하는 함수로는 크게 세가지가 있는데, void input_data(Student *pary); 의 경우 scanf로 점수, 이름 등의 값을 입력받으면 되고, void calc_data(Student * pary); 의 경우 입력 받은 값의 평균을 계산하면 되는 부분이다. void print_data(Student *pary); 의 경우 입력 받은 값을 토대로 계산한 값을 출력하는 구간이다. 따라서 위 조건에 맞게 코드를 작성하면
#include<stdio.h>
typedef struct student{

    int num;
    char name[20];
    int mic, lin, pro;
    int tot;
    double avg;
    char grade;
}Student;
void input_data(Student *pary){ //구조체 안의 변수들을 입력받는 함수
    for (int i = 0; i < 5; i++) {
        scanf("%d", &pary[i].num);
        scanf("%s", pary[i].name);
        scanf("%d", &pary[i].mic);
        scanf("%d", &pary[i].lin);
        scanf("%d", &pary[i].pro);
    }
}
void calc_data(Student * pary){ //(tot은 총점, avg은 평균, 등급은 grade로 지정)입력된 값을 계
산 하는 함수.
for (int i = 0; i < 5; i++) {
    pary[i].tot = pary[i].mic + pary[i].lin + pary[i].pro; //총점 계산
    pary[i].avg = pary[i].tot / 3.0; //평균 값 계산
    if (pary[i].avg >= 90) //만약 평균 값이 90점 이상이라면
        pary[i].grade = 'A'; //등급 A를 출력
    else if (pary[i].avg >= 80)
        pary[i].grade = 'B';
    else if (pary[i].avg >= 70)
        pary[i].grade = 'C';
    else if (pary[i].avg >= 60)
        pary[i].grade = 'D';
    else
        pary[i].grade = 'F';
}
}
void print_data(Student *pary){
for (int i = 0; i < 5; i++) {
    printf("%d, %s, %d, %.2f, %c\n",
    pary[i].num, pary[i].name, pary[i].tot, pary[i].avg, pary[i].grade); //계산한 값들
을 각각 프린트(출력)함.
    }
}
int main(){
    Student ary[5];

    input_data(ary);
    calc_data(ary);
    printf("결과 값은?\n");
    print_data(ary);
    return 0;
}
그 외의 메모리 공간을 공유할 수 있는 공용체와 상수를 정의하는 열거형, 각 필요한 자료형의 크기
만큼 공간을 차지하는 비트 필드에 대해서도 배울 수 있었다. 이번 시간에는 메모리 공간을 효율적으로 사용하는 것을 중심으로 수업을 배웠는데, 그점에 대해서
많은 것을 배우고 깨달을 점이 있었기에 좋았다고 생각한다. 예전엔 잘 신경 쓰지 못했던 메모리 관
리에 대해서 다음부터는 좀 더 신경 써서 관리해야겠다고 다짐했다.