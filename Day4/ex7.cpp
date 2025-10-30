#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a; // 화씨
    double c; // 섭씨

    // 화씨 입력
    printf("화씨값을 입력하시오: ");
    scanf("%lf", &a);

    // 화씨 → 섭씨 변환 공식
    c = (a - 32.0) * 5.0 / 9.0;

    // 결과 출력
    printf("섭씨값은: %f도 입니다.\n", c);

    return 0; // 프로그램 정상 종료
}
