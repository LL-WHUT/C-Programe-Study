#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
	while(a%2==0&&b%2==0)
	{
		a/=2;b/=2;
	}
	while(a%3==0&&b%3==0)
	{
		a/=3;b/=3;
	}
	while(a%5==0&&b%5==0)
	{
		a/=5;b/=5;
	}
	while(a%7==0&&b%7==0)
	{
		a/=7;b/=7;
	}
	printf("%d/%d",a,b);
	return 0;
}