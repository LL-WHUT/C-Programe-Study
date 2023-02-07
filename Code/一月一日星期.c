#include<stdio.h>
int main()
{
	long year,a,b;
	scanf("%d",&year);
	//输入年份
	year=year-1;
	//输入年份和公元一年刚好差一年
	a=365*year+year/4-year/100+year/400;
	//考虑闰年的情况下算出输入年份和公元一年之间相隔的天数
	b=a%7;
	switch (b)
	{
		case 0:printf("星期一");break;
		case 1:printf("星期二");break;
		case 2:printf("星期三");break;
		case 3:printf("星期四");break;
		case 4:printf("星期五");break;
		case 5:printf("星期六");break;
		case 6:printf("星期日");break;
	}
	return 0;
}
	