#include<stdio.h>
int main()
{
	int x,y,z;
	int a,b,c;

	scanf("%d %d %d",&x,&y,&z);
	if(x>y)
	{
		if(z>x)
		{
			a=z;b=x;c=y;
		}
		else if(z>y)
		{
			a=x;b=z;c=y;
		}
		else
		{
			a=x;b=y;c=z;
		}
	}
	else
	{
		if(z>y)
		{
			a=z;b=y;c=x;
		}
		else if(z>x)
		{
			a=y;b=z;c=x;
		}
		else
		{
			a=y;b=x;c=z;
		}
	}
	printf("%d->%d->%d",c,b,a);
	return 0;
}