#include<stdio.h>
int main()
{
	int N,X,Y,count=0;
	scanf("%d",&N);
	for(X=1;X<=N;X++)
	{
		for(Y=X;Y<=N;Y++)
		{
			if((X*X+Y*Y)==N)
			{
				count++;
				printf("%d %d\n",X,Y);
			}
		}
	}
	if(count==0)
		printf("No Solution");
	return 0;
}