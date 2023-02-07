#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char a[100][100], string = '#';
	int i, b[100], j, bb, cc, c[21] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	for (i = 0;; i++)
	{
		scanf("%s", &a[i]);
		b[i] = strlen(a[i]);
		if (strcmp(a[i], "#") == 0) break;
	}
	int  m = i - 1;
	for (i = 0; i <= (m - 1); i++)
	{
		for (j = i + 1; j <= m; j++)
		{
			if (b[i] > b[j])
			{
				bb = b[i], b[i] = b[j], b[j] = bb;
				cc = c[i], c[i] = c[j], c[j] = cc;
			}
		}
	}
	for (i = 0; i <= m; i++)
	{
		printf("%s ", a[c[i]]);
	}
	return 0;
}
