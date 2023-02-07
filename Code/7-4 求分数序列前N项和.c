#include<stdio.h>
int main()
{
	double a,b,sum;
	a=1;
	b=2;
	sum=0;
	int count,N;
	count=0;
	scanf("%d",&N);
	while(count<N)
	{
		sum+=b/a;
		b=a+b;
		a=b-a;
		count++;
	}
	printf("%.2lf",sum);
	return 0;
}



