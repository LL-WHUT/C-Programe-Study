#include<stdio.h>
int main()
{
	int n,k,i,t,a[11],count=0,sum=0;
	scanf("%d %d",&n,&k);
	for(i=n;count!=k&&i>=2;i--)
	{
		for(t=2;t<=i;t++)
		{
			if(i%t==0&&i!=t)break;
			else if(i%t==0&&i==t)
			{
				sum+=i;
				a[count]=i;
				count++;
			}
		}
	}
	for(i=0;i<=(count-2);i++)
		printf("%d+",a[i]);
	printf("%d=",a[count-1]);
	printf("%d",sum);
	return 0;
}