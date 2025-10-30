#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a;    // 삼각형의 밑변
    double b;    // 삼각형의 높이
    double area; // 넓이

    // 사용자 입력
    printf("삼각형의 밑변: ");
    scanf("%lf", &a); // double형 입력

    printf("삼각형의 높이: ");
    scanf("%lf", &b);

    // 넓이 계산 (1/2 * 밑변 * 높이)
    area = 0.5 * a * b;

    // 결과 출력 (소수점 4자리까지 표시)
    printf("삼각형의 넓이: %.4f\n", area);

    return 0; // 프로그램 정상 종료
}
