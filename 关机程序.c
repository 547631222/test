#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t  60");
again:
	printf("���Խ���1�����ڹػ������룺С��Ů����ȡ���ػ���\n");
	scanf("%s", input);
	if (0 == strcmp(input, "С��Ů"))
		system("shutdown -a");
	else
		goto again;
	return 0;
	return 0;
}