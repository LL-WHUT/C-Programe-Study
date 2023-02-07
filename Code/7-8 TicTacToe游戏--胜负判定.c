#include<stdio.h>
int main()
{
	int i,j,count_1=0,count_2=0;
	char a[3][4];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%c",&a[i][j]);
	for(i=0;i<3;i++)	//判断列
	{
		if(a[i][0]==a[i][1]&&a[i][1]==a[i][2])
		{
			if(a[i][0]=='X') count_1++;
			else if(a[i][0]=='O') count_2++;
		}
	}
	for(j=0;j<3;j++)	//判断行
	{
		if(a[0][j]==a[1][j]&&a[1][j]==a[2][j])
		{
			if(a[0][j]=='X') count_1++;
			else if(a[0][j]=='O') count_2++;
		}
	}
	if(a[0][0]==a[1][1]&&a[1][1]==a[2][2])	//判断“\”
	{
		if(a[1][1]=='X') count_1++;
		else if(a[1][1]=='O') count_2++;
	}
	if(a[2][0]==a[1][1]&&a[1][1]==a[0][2])		//判断“/”
	{
		if(a[1][1]=='X') count_1++;
		else if(a[1][1]=='O') count_2++;
	}
	if(count_1 == 0 && count_2 == 0) printf("No one win!");	//验证是否有有人赢
	else if(count_1 > 0) printf("X win!");
	else if(count_2 > 0) printf("O win!");
	return 0;
}