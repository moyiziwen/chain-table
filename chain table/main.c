#include"function.h"
#include<stdio.h>

int main() {
	list *L;
	int x,n;
//��ʼ������������
	printf_s("������");
	scanf_s("%d", &n);
	L=initlist(n);
	printlist(L);

//����
	printf_s("ֵ λ��\n");
	scanf_s("%d %d", &x, &n);
	inserlist(L, x, n);
	printlist(L);

	system("pause");
}