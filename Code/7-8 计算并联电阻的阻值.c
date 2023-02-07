#include<stdio.h>
int main()
{
	double r_1,r_2,R;
	scanf("%lf %lf",&r_1,&r_2);
	R=1/(1/r_1+1/r_2);
	printf("%.2lf",R);
	return 0;
}