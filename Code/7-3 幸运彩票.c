#include<stdio.h>
int main()
{
	int N,a=0,b=0,i,m;
	char c;
	scanf("%d",&N);
	for(m=1;m<=N;m++)
	{
		getchar();
		for(i=1;i<=3;i++)
		{
			c=getchar();
			a+=(c-'0');
		}
		for(i=1;i<=3;i++)
		{
			c=getchar();
			b+=(c-'0');
		}
		if(a==b)
			printf("You are lucky!\n");
		else if(a!=b)
			printf("Wish you good luck.\n");
		a=0;b=0;
	}
	return 0;
}