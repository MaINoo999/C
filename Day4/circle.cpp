/* 원의 면적을 계산하는 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float radius;  // 원의 반지름
    float area;    // 원의 면적

    // 사용자로부터 원의 반지름 입력 받기
    printf("반지름을 입력하시오: ");
    scanf("%f", &radius); // float형 입력 시 %f 사용

    // 원의 면적 계산 (π * r^2)
    area = 3.14f * radius * radius; // 3.14 대신 math.h의 M_PI 사용 가능

    // 계산된 면적 출력 (소수점 2자리까지 표시)
    printf("원의 면적: %.2f\n", area);

    return 0; // 프로그램 정상 종료
}
