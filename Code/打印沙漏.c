#include<stdio.h>
int main()
{
	int N,t=1,i,m,n;
	char c;
	scanf("%d %c",&N,&c);
	while(((N-2*t*t+1)>=0))
		t++;
	t--;	//t为一个三角形的高
	for(i=t;i>=1;i--)	//打印倒三角
	{
		for(m=1;m<=(t-i);m++)
			printf(" ");	//打印空格
		for(n=1;n<=(2*i-1);n++)
			printf("%c",c);	//打印符号
		printf("\n");	//打印回车
	}
	for(i=1;i<t;i++)	//打印下方梯形
	{
		for(m=1;m<=(t-i-1);m++)
			printf(" ");
		for(n=1;n<=(2*i+1);n++)
			printf("%c",c);
		printf("\n");
	}
	printf("%d",N-2*t*t+1);
	return 0;
}