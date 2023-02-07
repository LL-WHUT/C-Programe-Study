#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,a,b;
	scanf("%d",&n);
	for(i=-n/2;i<=n/2;i++)
	{
		for(a=1;a<=2*abs(i);a++)
			printf(" ");
		for(b=1;b<=(n-2*abs(i));b++)
			printf("* ");
		printf("\n");
	}
	return 0;
}