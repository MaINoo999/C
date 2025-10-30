// Visual Studio에서 scanf, strcpy 같은 함수 사용 시 보안 경고를 없애주는 설정
#define _CRT_SECURE_NO_WARNINGS  

// 표준 입출력 함수를 사용하기 위해 필요한 헤더파일 (printf, scanf 등)
#include <stdio.h>

// main 함수: C 프로그램이 시작되는 곳
int main(void)
{
    // 정수를 저장할 변수 i 선언
    int i;

    // 사용자에게 정수를 입력하라는 안내 문장 출력
    printf("정수를 입력하시오: ");

    // 사용자로부터 정수를 입력받아 변수 i에 저장
    // &i : 변수 i의 "주소"를 의미 → scanf가 메모리 위치를 알아야 값을 저장 가능
    scanf("%d", &i);

    // 입력된 정수값을 확인 차원에서 출력
    printf("입력한 값은 %d입니다.\n", i);

    // 프로그램이 정상적으로 종료되었음을 운영체제에 알림
    return 0;
}
