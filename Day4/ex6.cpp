#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a;    // �ﰢ���� �غ�
    double b;    // �ﰢ���� ����
    double area; // ����

    // ����� �Է�
    printf("�ﰢ���� �غ�: ");
    scanf("%lf", &a); // double�� �Է�

    printf("�ﰢ���� ����: ");
    scanf("%lf", &b);

    // ���� ��� (1/2 * �غ� * ����)
    area = 0.5 * a * b;

    // ��� ��� (�Ҽ��� 4�ڸ����� ǥ��)
    printf("�ﰢ���� ����: %.4f\n", area);

    return 0; // ���α׷� ���� ����
}
