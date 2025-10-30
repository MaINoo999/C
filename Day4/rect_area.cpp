#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    double w;         // 사각형의 가로 길이
    double h;         // 사각형의 세로 길이
    double area;      // 사각형의 넓이
    double perimeter; // 사각형의 둘레

    // 가로와 세로 값 초기화
    w = 10.0;
    h = 5.0;

    // 넓이 계산
    area = w * h;

    // 둘레 계산
    perimeter = 2 * (w + h);

    // 결과 출력 (소수점 2자리까지 보기 좋게)
    printf("사각형의 넓이 : %.2lf\n", area);
    printf("사각형의 둘레 : %.2lf\n", perimeter);

    return 0; // 프로그램 정상 종료
}
