#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    double w;         // �簢���� ���� ����
    double h;         // �簢���� ���� ����
    double area;      // �簢���� ����
    double perimeter; // �簢���� �ѷ�

    // ���ο� ���� �� �ʱ�ȭ
    w = 10.0;
    h = 5.0;

    // ���� ���
    area = w * h;

    // �ѷ� ���
    perimeter = 2 * (w + h);

    // ��� ��� (�Ҽ��� 2�ڸ����� ���� ����)
    printf("�簢���� ���� : %.2lf\n", area);
    printf("�簢���� �ѷ� : %.2lf\n", perimeter);

    return 0; // ���α׷� ���� ����
}
