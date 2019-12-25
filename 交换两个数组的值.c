#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Swap(int *p, int *q)
{
	int tmp = *q;
	*q = *p;
	*p = tmp;
}

void Show(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	//��ʼ��������
	for (i = 0; i < len; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < len; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//��ʼ��������
	for (i = 0; i < len; i++)
	{
		Swap(&arr1[i], &arr2[i]);
	}
	//��ӡ����
	Show(arr1, len);
	Show(arr2, len);
	return 0;
}
