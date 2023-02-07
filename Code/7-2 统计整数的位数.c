#include<stdio.h>
#include<math.h>
int main()
{
	double a,b;
	int num;
	a=0;
	b=10;
	scanf("%d",&num);
	if(abs(num)<=9)
	printf("It contains 1 digits.");
	else
	{
		while(b>=10)
		{
			a++;
			b=(float)(abs(num))/pow(10,a-1);
		}
		printf("It contains %.0lf digits.",a);
	}
	return 0;
}



