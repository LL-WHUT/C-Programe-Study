#include<stdio.h>
#include<math.h>
int main()
{
	double eps,N,sum,count,a,b;
	count=0;
	sum=0;
	a=-2;
	b=1;
	scanf("%lf",&eps);
	if(eps==1)
		printf("sum = 1.000000");
	else if(eps>0&&eps<1)
	{
		while(b>eps)
		{
			a+=3;
			b=1/a;
			sum+=(1/a)*(pow(-1,count++));
		}
		printf("sum = %.6lf",sum);
	}
	else if(eps>1)
		printf("sum = 1.000000");
	return 0;
}



