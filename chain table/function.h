#include<stdio.h>
#include<stdlib.h>

typedef struct list {
	int score;
	struct list *next;
}list;

list *initlist(int n){
	list *p = (list*)malloc(sizeof(list));
	list *head = p;
	for (int i = 0; i < n; i++)
	{
		list *a = (list *)malloc(sizeof(list));
		scanf_s("%d", &a->score);
		a->next = NULL;
		head->next = a;
		head = head->next;
	}
	return p;
}

list *inserlist(list *L, int x, int n) {
	list *head = L;
	for (int i = 0; i < n; i++)
	{
		head = head->next;
		if (head==NULL)
		{
			printf_s("Î»ÖÃ³¬³ö.\n");
			return L;
		}
	}
	list *a = (list *)malloc(sizeof(list));
	a->score = x;
	a->next = head->next;
	head->next = a;
	return L;
}


void printlist(list *L) {
	list *head = L;
	while (head->next)
	{
		head = head->next;
		printf_s("%d ", head->score);
	}
	printf_s("\n");
}