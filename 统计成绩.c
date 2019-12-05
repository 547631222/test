#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct STU
{
    int id;
    char name[20];
    int score[20];
    int sum;
}s[110];

void input(int n,int m)
{
    int i,j;
    printf("������ѧ����ѧ�š������͸��Ƴɼ�\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&s[i].id);
        scanf(" %s",&s[i].name);
        for(j=0; j<m; j++)
        {
            scanf("%d",&s[i].score[j]);
        }
    }
}
void sort(int n)
{
    int i,j;
    struct STU ch;
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(s[i].sum<s[j].sum)
    		{
    			ch=s[i];
				s[i]=s[j];
				s[j]=ch;	
			}
		}
	}
}
void ranks(int n,int rerank[])
{
    int i,k;
    k=0;
    for(i=0;i<n;i++)
    {
        if(s[i].sum==s[i-1].sum)
        {
             rerank[i]=k;
        }
        else
        {
            k++;
            rerank[i]=k;
        }
    }
}
void display(int n,int m,int rerank[])
{
    int i,j;
    printf("\n���δ�ӡ������ѧ�š��������ֺܷ͸��Ʒ���\n");
    for(i=0; i<n; i++)
    {
        printf("  %d ",rerank[i]);
        printf("  %d ",s[i].id);
        printf("  %s ",s[i].name);
        printf("  %d\t",s[i].sum);
        for(j=0; j<m; j++)
        {
            printf("%d\t",s[i].score[j]);
        }
        printf("\n");
    }
}

int main()
{
    int n,m,i,j;
    int rerank[100];
    printf("������ѧ������n:\n");
    scanf("%d",&n);
    printf("�����뿼�Կ�Ŀ��m:\n");
    scanf("%d",&m);
    input(n,m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            s[i].sum+=s[i].score[j];
        }
    }
    sort(n);
    ranks(n,rerank);
    display(n,m,rerank);
    return 0;
}
