#include<stdio.h>
int main()
{
	int a,b,MIN,hour,min;
	scanf("%d %d",&a,&b);
	MIN=(a/100)*60+(a%100)+b;
	hour=MIN/60;min=MIN%60;
	printf("%d%02d",hour,min);
	return 0;
}