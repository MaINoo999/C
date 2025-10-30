#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double m;    // 마일
    double sum;  // 미터

    // 사용자 입력
    printf("마일을 입력하세요: ");
    scanf("%lf", &m);  // 변수 주소 필요

    // 계산: 1마일 = 1609미터
    sum = m * 1609;

    // 결과 출력 (소수점 2자리까지 표시)
    printf("%.2f마일은 %.2f미터입니다.\n", m, sum);

    return 0; // 프로그램 정상 종료
}
