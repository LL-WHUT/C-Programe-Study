#include<stdio.h>
int main()
{
	int N,i,t,count=0;
	scanf("%d",&N);
	printf("%d=",N);
	int a[1300];
	for(i=2;i<=N;i++)	//��ȡ������N������
	{
		for(t=2;t<=i;t++)
		{
			if(i%t==0&&i!=t) break;
			else if(i%t==0&&i==t)
			{
				count++;
				a[count]=i;	//��������������a[]��
			}
		}
	}
	i=1;
	while(N!=a[i])	//��ӡ����������������
	{
		if(N%a[i]==0)
		{
			N=N/a[i];
			printf("%d*",a[i]);
		}
		else if(N%a[i]!=0)
			i++;
	}
	printf("%d",a[i]);	//���һ������
	return 0;
}