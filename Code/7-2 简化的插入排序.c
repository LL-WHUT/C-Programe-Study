#include<stdio.h>
int main()
{
	int a[11], i, N,n, k;
	scanf("%d", &N);
	if (N != 0)
	{
		for (i = 1; i <= N; i++)
			scanf("%d", &a[i]);
		scanf("%d", &n);
		for (i = 1;; i++)
		{
			if (n > a[i]) a[i - 1] = a[i];
			else if (n <= a[i])
			{
				a[i - 1] = n;
				break;
			}
		}
		for (i = 0; i <= N; i++)
			printf("%d ", a[i]);
	}
	if (N == 0)
	{
		scanf("%d", &n);
		printf("%d ", n);
	}
	return 0;
}
