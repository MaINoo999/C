#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a;    // ����� �Է� �� (x)
    double sum;  // ���׽� �����

    // ����� �Է�
    printf("���׽� ��� ���α׷� (3x�� + 7x + 11)\n�Ǽ��� �Է��ϼ���: ");
    scanf("%lf", &a); // double �Է�

    // ���׽� ���: 3x�� + 7x + 11
    sum = (3 * (a * a)) + (7 * a) + 11;

    // ��� ��� 
    printf("���׽��� ����: %f\n", sum);

    return 0; // ���α׷� ���� ����
}
