#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double weight_on_earth; // ���������� ������(kg)
    double weight_on_moon;  // �޿����� ������(kg)

    // ����� �Է�
    printf("�� ������ ��ȯ ����\n�����Ը� �Է����ּ���(����: kg): ");
    scanf("%lf", &weight_on_earth); // double�� �Է�

    // �޿����� ������ ��� (���� �������� 17%)
    weight_on_moon = weight_on_earth * 0.17;

    // ��� ��� (�Ҽ��� 2�ڸ�����)
    printf("�޿����� �����Դ� %fkg�Դϴ�.\n", weight_on_moon);

    return 0; // ���α׷� ���� ����
}
