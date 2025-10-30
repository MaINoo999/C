/* 환율 계산 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double rate;   // 원/달러 환율
    double usd;    // 달러화
    int krw;       // 원화

    // 환율 입력
    printf("환율을 입력하시오: ");
    scanf("%lf", &rate);  // double형 입력이므로 %lf 사용

    // 원화 금액 입력
    printf("원화 금액을 입력하시오: ");
    scanf("%d", &krw);    // int형 입력이므로 %d 사용

    // 환산 계산
    usd = krw / rate;

    // 결과 출력
    printf("원화 %d원은 %.2f달러입니다.\n", krw, usd);

    return 0;
}
