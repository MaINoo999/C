#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double m;    // ����
    double sum;  // ����

    // ����� �Է�
    printf("������ �Է��ϼ���: ");
    scanf("%lf", &m);  // ���� �ּ� �ʿ�

    // ���: 1���� = 1609����
    sum = m * 1609;

    // ��� ��� (�Ҽ��� 2�ڸ����� ǥ��)
    printf("%.2f������ %.2f�����Դϴ�.\n", m, sum);

    return 0; // ���α׷� ���� ����
}
