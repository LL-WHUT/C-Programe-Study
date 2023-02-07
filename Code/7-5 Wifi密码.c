#include<stdio.h>
int main()
{
	int n,i,a,b;
	scanf("%d",&n);
	for(i=1;i<=(n/2+1);i++)
	{
		for(a=1;a<=(4-i)*2;a++)
			printf(" ");
		for(b=1;b<=(2*i-1);b++)
			printf("* \n");
	}
	return 0;
}