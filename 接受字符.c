#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	while (1)
	{
		ch = getchar();
		if (ch >= 'a'&&ch <= 'z')
		{
			putchar(ch - 32);
		}
		if (ch >= 'A'&&ch <= 'Z')
		{
			putchar(ch + 32);
		}
	}
	return 0;
}
�ж��ַ��Ƿ�Ϊ��д
#include<stdio.h>
int main()
{
	char a;
	while (1)
	{
		scanf("%c", &a);
		if (a >= 65 && a <= 90)
			printf("�Ǵ�д�ַ�\n");
		else
			printf("���Ǵ�д�ַ�\n");
		getchar();
	}
	return 0;
}
