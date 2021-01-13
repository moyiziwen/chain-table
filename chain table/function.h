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
	for (int i = 1; i < n; i++)
	{
		head = head->next;
		if (head==NULL)
		{
			printf_s("位置超出.\n");
			return L;
		}
	}
	list *a = (list *)malloc(sizeof(list));
	a->score = x;
	a->next = head->next;
	head->next = a;
	return L;
}

list *delete_list(list *L, int n) {
	list *head = L;
	for (int i =1 ; i < n; i++)
	{
		head = head->next;
	}
	if (head->next==NULL)
	{
		printf_s("位置超出。");
		return L;
	}
	head->next = head->next->next;
	return L;
}

int search_list(list *L, int x) {
	list *head = L;
	int n=1;
	head = head->next;
	while (head!=NULL)
	{
		if (head->score==x)
		{
			return n;
		}
		head = head->next;
		n++;
	}
	return -1;
}

list *alter_list(list *L, int x, int n) {
	list *head = L;
	head = head->next;
	for (int i = 1; i < n; i++)
	{
		head = head->next;
		if (head==NULL)
		{
			return L;
		}
	}
	head->score = x;
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