#include<stdio.h>
int main()
{
	double a,b,c,d,sum,average;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	sum=a+b+c+d;
	average=(a+b+c+d)/4;
	printf("Sum = %.0lf; Average = %.1lf",sum,average);
	return 0;
}