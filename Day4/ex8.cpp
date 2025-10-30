#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a;    // 사용자 입력 값 (x)
    double sum;  // 다항식 결과값

    // 사용자 입력
    printf("다항식 계산 프로그램 (3x² + 7x + 11)\n실수를 입력하세요: ");
    scanf("%lf", &a); // double 입력

    // 다항식 계산: 3x² + 7x + 11
    sum = (3 * (a * a)) + (7 * a) + 11;

    // 결과 출력 
    printf("다항식의 값은: %f\n", sum);

    return 0; // 프로그램 정상 종료
}
