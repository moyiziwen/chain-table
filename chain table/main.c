#include"function.h"
#include<stdio.h>

int main() {
	list *L;
	int x,n;
//初始化：创建链表
	printf_s("个数：");
	scanf_s("%d", &n);
	L=initlist(n);
	printlist(L);

//插入
	printf_s("值 位置\n");
	scanf_s("%d %d", &x, &n);
	inserlist(L, x, n);
	printlist(L);

	system("pause");
}