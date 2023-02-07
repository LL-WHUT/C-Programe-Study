#include<stdio.h>
int main()
{
	int N,i,t,count=0;
	scanf("%d",&N);
	printf("%d=",N);
	int a[1300];
	for(i=2;i<=N;i++)	//获取不大于N的素数
	{
		for(t=2;t<=i;t++)
		{
			if(i%t==0&&i!=t) break;
			else if(i%t==0&&i==t)
			{
				count++;
				a[count]=i;	//将素数存在数组a[]中
			}
		}
	}
	i=1;
	while(N!=a[i])	//打印出满足条件的素数
	{
		if(N%a[i]==0)
		{
			N=N/a[i];
			printf("%d*",a[i]);
		}
		else if(N%a[i]!=0)
			i++;
	}
	printf("%d",a[i]);	//最后一个素数
	return 0;
}