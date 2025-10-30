#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double weight_on_earth; // 지구에서의 몸무게(kg)
    double weight_on_moon;  // 달에서의 몸무게(kg)

    // 사용자 입력
    printf("달 몸무게 변환 계산기\n몸무게를 입력해주세요(단위: kg): ");
    scanf("%lf", &weight_on_earth); // double형 입력

    // 달에서의 몸무게 계산 (지구 몸무게의 17%)
    weight_on_moon = weight_on_earth * 0.17;

    // 결과 출력 (소수점 2자리까지)
    printf("달에서의 몸무게는 %fkg입니다.\n", weight_on_moon);

    return 0; // 프로그램 정상 종료
}
