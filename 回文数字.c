#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int Func(char arr[],int len)
{
	int i,j;
	for (i = 0,j=len-1; i < len / 2; i++,j--)
	{
		if (arr[i] != arr[j])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char arr[] = "123";
	int len = strlen(arr);
	if (Func(arr, len))
	{
		printf("�ǻ�������\n");
	}
	else
		printf("���ǻ�������\n");
	return 0;
}