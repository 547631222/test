#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}list, *linklist;

linklist Creatlist(void)
{
	int i, len, x;
	printf("��������Ҫ�����ڵ�����");
	scanf("%d", &len);
	linklist H = (linklist)malloc(sizeof(list));
	if (H == NULL)
	{
		printf("����ռ�ʧ�ܣ�");
		exit(-1);
	}
	linklist t = H;
	t->next = NULL;
	for (i = 0; i<len; ++i)
	{

		linklist p = (linklist)malloc(sizeof(list));
		if (p == NULL)
		{
			printf("����ռ�ʧ�ܣ�");
			exit(-1);

		}
		printf("�������%d���ڵ�:", i + 1);
		scanf("%d", &x);
		p->data = x;
		t->next = p;
		p->next = NULL;
		t = p;

	}
	return H;
}
int Mid(linklist H)
{
	linklist fast=H, slow=H;
	while (fast->next!=NULL)
	{
		if (fast->next->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;
		}
		else
			fast = fast->next;
	}
	return  slow->data;
}
int main()
{
	int m;
	linklist L = NULL;
	L = Creatlist();
	m=Mid(L);
	printf("%d\n", m);
	return 0;
}