#include<stdio.h>
int main()
{
	int a,b,c,d,sum;
	scanf("%d",&a);
	b=a/100;c=(a/10)%10;d=a%10;
	sum=d*100+c*10+b;
	printf("%d",sum);
	return 0;
}