/* ���� ������ ����ϴ� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float radius;  // ���� ������
    float area;    // ���� ����

    // ����ڷκ��� ���� ������ �Է� �ޱ�
    printf("�������� �Է��Ͻÿ�: ");
    scanf("%f", &radius); // float�� �Է� �� %f ���

    // ���� ���� ��� (�� * r^2)
    area = 3.14f * radius * radius; // 3.14 ��� math.h�� M_PI ��� ����

    // ���� ���� ��� (�Ҽ��� 2�ڸ����� ǥ��)
    printf("���� ����: %.2f\n", area);

    return 0; // ���α׷� ���� ����
}
