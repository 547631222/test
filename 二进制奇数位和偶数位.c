#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void func(int n)
{
	int i,temp;
	printf("ż��λΪ��\n");
	for (i = 31; i > 0; i -= 2)
	{
		temp = n >> i & 1;
		printf("%d", temp);
	}
	printf("\n����λΪ��\n");
	for (i = 30; i >= 0; i -= 2)
	{
		temp = n >> i & 1;
		printf("%d", temp);
	}
}
int main()
{
	int m;
	scanf("%d", &m);
	func(m);
	return 0;
}