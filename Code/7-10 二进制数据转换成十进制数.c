#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char a[100];
	int i, b[100];
	for (i = 0;; i++)
	{
		scanf("%s", &a[i]);
		b[i] = strlen(a[i]);
		if (a[i] == '#') break;
	}
	return 0;
}
