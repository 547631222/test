#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void menu()
{
	printf("-------------------------1:play---------------------------\n");
	printf("-------------------------0:exit----------------------------\n");
}
void play()
{
	int i,s=1;
	while (s)
	{
		int m;
		int random = rand()%100+1;//1~100�����
		while (1)
		{
			printf("�����룺\n");
		scanf("%d", &m);
		if (m > random)
			printf("�´��ˣ�\n");
		else if (m < random)
			printf("��С�ˣ�\n");
		else
		{
			printf("�¶��ˣ�\n");
			s = 0;		
			break;
		}
		
		}

	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			play();
			break;
		default:
			printf("ѡ��������������룡\n");
			break;
		}
	} while (input);
	return 0;
}
