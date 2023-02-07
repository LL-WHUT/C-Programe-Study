#include<stdio.h>
int main()
{
	int m,n,i,j,j_1,a[6][6];
	scanf("%d %d",&m,&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			j_1=(j+n-m%n)%n;
			printf("%d ",a[i][j_1]);
			if(j==(n-1)) printf("\n");
		}
	}
	return 0;
}