#include<stdio.h>
int main()
{
	int N, i, j, min, max, k, a[10], count = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i] <= a[j]) count++;
		}
		if (count == N) min = i;
		count = 0;
	}
	k = a[0]; a[0] = a[min]; a[min] = k;
	count = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i] >= a[j]) count++;
		}
		if (count == N) max = i;
		count = 0;
	}
	k = a[N - 1]; a[N - 1] = a[max]; a[max] = k;
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	return 0;
}
