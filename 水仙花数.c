#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>//����pow()����
int main()
{
	int i;
	for (i = 0; i < 999999; i++)
	{
		int w=1,count=0,sum=0;//count�����洢����λ��
		while (i / w!= 0)//��������λ��
		{
			count++;
			w *= 10;
		}
		for (w = w / 10; w>0; w /= 10)
		{
			sum =pow(( i / w%10),count)+sum;//sum�����������λN�η�֮��
		}
		if (sum == i)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}
