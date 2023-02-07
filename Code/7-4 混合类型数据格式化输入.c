#include<stdio.h>
int main()
{
	float a,d;
	int b;
	char c;
	scanf("%f %d %c %f",&a,&b,&c,&d);
	printf("%c %d %.2f %.2f",c,b,a,d);
	return 0;
}