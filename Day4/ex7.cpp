#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a; // ȭ��
    double c; // ����

    // ȭ�� �Է�
    printf("ȭ������ �Է��Ͻÿ�: ");
    scanf("%lf", &a);

    // ȭ�� �� ���� ��ȯ ����
    c = (a - 32.0) * 5.0 / 9.0;

    // ��� ���
    printf("��������: %f�� �Դϴ�.\n", c);

    return 0; // ���α׷� ���� ����
}
