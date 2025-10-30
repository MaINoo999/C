/* 월수령액을 계산하는 프로그램 */
// 이 프로그램은 사용자가 입력한 연봉(만원 단위)을 기준으로
// 1개월 동안 받는 금액(월수령액)을 계산하여 출력한다.

#define _CRT_SECURE_NO_WARNINGS  // Windows 환경에서 scanf 사용 시 발생하는 보안 경고를 방지
#include <stdio.h>  // 표준 입출력 함수 사용을 위한 헤더파일

int main(void)
{
    int ysalary; // 연봉(년 단위, 만원 단위)
    int msalary; // 월 수령액(월 단위, 만원 단위)

    // 사용자에게 연봉 입력 요청
    printf("연봉을 입력하세요(단위: 만원): ");

    // 사용자로부터 정수형 데이터를 입력받아 ysalary 변수에 저장
    scanf("%d", &ysalary);

    // 연봉을 12로 나누어 월 수령액 계산 (단순 계산)
    msalary = ysalary / 12;

    // 계산된 결과를 출력
    printf("월수령액(단위: 만원): %d \n", msalary);

    // 프로그램 정상 종료
    return 0;
}
