#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char password[20] = { 0 };
	int count = 3;
	while (count != 0)
	{
		printf("���������������password��");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//"123456"
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			count--;
			printf("�㻹��%d�λ���!\n", count);
		}
	}
	return 0;
}

