#include"function.h"
#include<stdio.h>

int main() {
	list *L = (list*)malloc(sizeof(list));
	int x,n;
	int a;

	while (1)
	{
		printf_s("1:��ʼ��2:��3:ɾ4:��5:��6:���7:�˳�\n");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			//��ʼ������������
			printf_s("������");
			scanf_s("%d", &n);
			L = initlist(n);
			printlist(L);
			break;
		case 2:
			//����
			printf_s("ֵ λ��\n");
			scanf_s("%d %d", &x, &n);
			inserlist(L, x, n);
			printlist(L);
			break;
		case 3:
			//ɾ��
			printf_s("λ�ã�");
			scanf_s("%d", &n);
			delete_list(L, n);
			printlist(L);
			break;
		case 4:
			//����
			printf_s("ֵ��");
			scanf_s("%d", &x);
			n = search_list(L, x);
			printf_s("%d\n", n);
			break;
		case 5:
			//��
			printf_s("ֵ λ��\n");
			scanf_s("%d %d", &x, &n);
			alter_list(L, x, n);
			printlist(L);
			break;
		case 6:
			//���
			printlist(L);
			break;
		default:
			break;
		}
		if (a==7)
		{
			break;
		}
	}
	system("pause");
}