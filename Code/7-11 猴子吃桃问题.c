#include<stdio.h>
int main()
{
	int N,a,i;
	i=1;a=1;
	scanf("%d",&N);
	while(i<N)
	{
		a=(a+1)*2;
		i++;
	}
	printf("%d",a);
	return 0;
}