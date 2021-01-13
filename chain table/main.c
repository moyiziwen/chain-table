#include"function.h"
#include<stdio.h>

int main() {
	list *L = (list*)malloc(sizeof(list));
	int x,n;
	int a;

	while (1)
	{
		printf_s("1:初始化2:增3:删4:查5:改6:输出7:退出\n");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			//初始化：创建链表
			printf_s("个数：");
			scanf_s("%d", &n);
			L = initlist(n);
			printlist(L);
			break;
		case 2:
			//插入
			printf_s("值 位置\n");
			scanf_s("%d %d", &x, &n);
			inserlist(L, x, n);
			printlist(L);
			break;
		case 3:
			//删除
			printf_s("位置：");
			scanf_s("%d", &n);
			delete_list(L, n);
			printlist(L);
			break;
		case 4:
			//查找
			printf_s("值：");
			scanf_s("%d", &x);
			n = search_list(L, x);
			printf_s("%d\n", n);
			break;
		case 5:
			//改
			printf_s("值 位置\n");
			scanf_s("%d %d", &x, &n);
			alter_list(L, x, n);
			printlist(L);
			break;
		case 6:
			//输出
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