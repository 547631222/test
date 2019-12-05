#include "stdio.h"

#include "stdlib.h"

#include "conio.h"

#include "string.h"

#define N 3







struct student

{

	int num;

	char name[20];

	int age;

	char sex[5];

	char address[10];

	char telephone[20];

	int score[3];

	float sum;

	float avr;

}stu[N];







void view()

{

	printf("\n\n\n\n\n\n\n\n");

	printf("\t==========================================================\n");   

	printf("\t**********            ѧ������ϵͳ              **********\n");      

	printf("\t**********                            **********\n");

	printf("\t**********                                 **********\n");

	printf("\t==========================================================\n");

}







int pass()  

{

	int x;  

	printf("\t\t\t�������¼����:");

	scanf("%d",&x);

	if(x==66)

		return 1;   

	else

	{

		printf("���������������\n");

		return 0;

	} 

}







void input()

{

	int i,j;

	

	for(i=0;i<N;i++)

	{

		printf("������ѧ��:");

		scanf("%d",&stu[i].num);

		printf("����������:");

		scanf("%s",stu[i].name);

		printf("����������:");

		scanf("%d",&stu[i].age);

		printf("�������Ա�:");

		scanf("%s",stu[i].sex);

		printf("������סַ:");

		scanf("%s",stu[i].address);

		printf("������绰:");

		scanf("%s",stu[i].telephone);

		

		for(j=0;j<N;j++)

		{

			printf("��%d�ųɼ��ķ�����",j+1);

			scanf("%d",&stu[i].score[j]);

		}	

		printf("\n");

	}

    printf("\n\n�������!��������������˵�!");

	getch();

}





void select(int n)

{

	if(n<=4)

	{

		printf("%d��ѧ��:\n",n);

		printf("ѧ��: %d\n",stu[n-1].num);

		printf("����: %s\n",stu[n-1].name);

		printf("����: %d\n",stu[n-1].age);

		printf("�Ա�: %s\n",stu[n-1].sex);

		printf("סַ: %s\n",stu[n-1].address);

		printf("�绰: %s\n",stu[n-1].telephone);

	}

	else

		printf("�������ѧ�Ų����ڣ��뷵����ҳ������ѡ��:");

	getch();

}





void count()

{

	int i,j;

	float t,sum,avr;		

	

	printf("ѧ��     ����      �ɼ�1    �ɼ�2    �ɼ�3");	

	for(i=0;i<N;i++)

	{

		printf("\n");

		printf("%3d\t",stu[i].num);

		printf("%4s\t",stu[i].name);

		for(j=0;j<N;j++)

		{

			printf("%7d",stu[i].score[j]);

            printf("\t");

		}

		printf("\n");

	}	

	

	for(i=0;i<N;i++)

	{

		sum=0.0;	

		for(j=0;j<N;j++)

		{

			sum+=stu[i].score[j];

		}

		stu[i].sum=sum;

		stu[i].avr=sum/N;	

		printf("\nѧ��%s���ܳɼ�Ϊ:",stu[i].name);

		printf("%0.2f��",stu[i].sum);

		printf("\nѧ��%s��ƽ���ɼ�Ϊ:",stu[i].name);

		printf("%0.2f��",stu[i].avr);

	}

    

	for(j=0;j<N;j++)

	{

		for(i=0;i<N-j-1;i++)

		{

			if(stu[i].avr<stu[i+1].avr)

			{

				t=stu[i].avr;

				stu[i].avr=stu[i+1].avr;

				stu[i+1].avr=t;

			}

		}    

	}

	printf("\n\nѧ��ƽ���ɼ�ǰ����:\n");	

	

	for(i=0;i<N;i++)

	{

		printf("��%d��:",i+1);

		printf("%0.2f��\n",stu[i].avr);

	}

	printf("\n��������������˵�!");

	getch();

}





void add()

{

	printf("������ѧ��:");

	scanf("%d",&stu[3].num);

	printf("����������:");

	scanf("%s",stu[3].name);

	printf("����������:");

	scanf("%d",&stu[3].age);

	printf("�������Ա�:");

	scanf("%s",stu[3].sex);

	printf("������סַ:");

	scanf("%s",stu[3].address);

	printf("������绰:");

	scanf("%s",stu[3].telephone);

	printf("\n");		

	printf("\n\n�������!��������������˵�!");

	getch();

}





void Delete()

{	     

	int n;

	printf("������Ҫɾ��ѧ����ѧ��:");

	scanf("%d",&n);

	

	stu[n-1].num=stu[n].num;

	strcpy(stu[n-1].name,stu[n].name);

	stu[n-1].age=stu[n].age;

	strcpy(stu[n-1].sex,stu[n].sex);

	strcpy(stu[n-1].address,stu[n].address);

	strcpy(stu[n-1].telephone,stu[n].telephone);



    stu[n].num=stu[n+1].num;

	strcpy(stu[n].name,stu[n+1].name);

	stu[n].age=stu[n+1].age;

	strcpy(stu[n].sex,stu[n+1].sex);

	strcpy(stu[n].address,stu[n+1].address);

	strcpy(stu[n].telephone,stu[n+1].telephone);



    stu[n+1].num=stu[n+2].num;

	strcpy(stu[n+1].name,stu[n+2].name);

	stu[n+1].age=stu[n+2].age;

	strcpy(stu[n+1].sex,stu[n+2].sex);

	strcpy(stu[n+1].address,stu[n+2].address);

	strcpy(stu[n+1].telephone,stu[n+2].telephone);

	

	printf("\n\n�������!��������������˵�!");

	getch();

}





void menu()

{

    int m,n;

	printf("\n\n\n");

	printf("\t\t\t********************************\n");

	printf("\n\n\t\t\t\tѧ����Ϣ����ϵͳ\n\n");

	printf("\t\t\t\t   1.��Ϣ¼��\n\n\t\t\t\t   2.��Ϣ��ѯ\n\n\t\t\t\t   3.�ɼ���ѯ\n\n\t\t\t\t   4.����ѧ��\n\n\t\t\t\t   5.ɾ��ѧ��\n\n");

	printf("\n\t\t\t********************************\n");

	printf("\t\t\t\t����Ҫ���еĲ���:");

	scanf("%d",&m);

	switch(m)

	{

	   case 1:

		   {

			   system("cls");

			   input();

			   break;

		   }

	   case 2:

		   {

			   system("cls");

			   printf("������Ҫ��ѯѧ����ѧ��:");

			   scanf("%d",&n);

			   select(n);

			   break;

		   }

	   case 3:

		   {

			   system("cls");

			   count();

			   break;  

		   }    

	   case 4:

		   {

			   system("cls");

			   add();

			   break;

		   }

	   case 5:

		   {

			   system("cls");			   

			   Delete();

			   break;

		   }		   

	}

}





int main()

{

	view();

	if(pass())

	{

		while(1)

		{

			system("cls");

			menu();

		}

	}

}

