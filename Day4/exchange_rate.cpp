/* ȯ�� ��� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double rate;   // ��/�޷� ȯ��
    double usd;    // �޷�ȭ
    int krw;       // ��ȭ

    // ȯ�� �Է�
    printf("ȯ���� �Է��Ͻÿ�: ");
    scanf("%lf", &rate);  // double�� �Է��̹Ƿ� %lf ���

    // ��ȭ �ݾ� �Է�
    printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
    scanf("%d", &krw);    // int�� �Է��̹Ƿ� %d ���

    // ȯ�� ���
    usd = krw / rate;

    // ��� ���
    printf("��ȭ %d���� %.2f�޷��Դϴ�.\n", krw, usd);

    return 0;
}
