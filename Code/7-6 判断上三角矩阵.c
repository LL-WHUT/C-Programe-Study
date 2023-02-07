#include<stdio.h>
int main()
{
	int n,i,j,T,s,a[10][10],sum=0;
	scanf("%d",&T);
	for(s=1;s<=T;s++)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(a[i][j]!=0) sum+=1;
			}
		}
		if(sum==0) printf("YES\n");
		else if(sum!=0) printf("NO\n");
		sum=0;
	}
	return 0;
}