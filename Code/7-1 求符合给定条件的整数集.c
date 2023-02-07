#include<stdio.h>
int main()
{
	int i,A,b,c,d,count=0;
	scanf("%d",&A);
	int a[5] = {0,A,A + 1,A + 2,A + 3};
	for(b=1;b<=4;b++)
	{
		for(c=1;c<=4;c++)
		{
			for(d=1;d<=4;d++)
			{
				if(b!=c&&b!=d&&c!=d)
				{
					count++;
					if(count%6!=0)
						printf("%d%d%d ",a[b],a[c],a[d]);
					else if(count%6==0)
						printf("%d%d%d\n",a[b],a[c],a[d]);
				}
			}
		}
	}
	return 0;
}