#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year,month,day;
	scanf("%d-%d-%d",&year,&month,&day);
	if(year%4==0&&year%100!=0||year%400==0)	
	{
		if(month==1||month==3||month==5||month==7||month==8||month==10)	
		{
			if(day==30||day==31)
				printf("%04d.%02d.%02d",year,month+1,day-29);
			else
				printf("%04d.%02d.%02d",year,month,day+2);
		}
		else if(month==12)
		{
			if(day==30||day==31)
				printf("%04d.%02d.%02d",year+1,month-11,day-29);
			else
				printf("%04d.%02d.%02d",year,month,day+2);
		}
		else if(month==4||month==6||month==9||month==11)
		{
			if(day==29||day==30)
				printf("%04d.%02d.%02d",year,month+1,day-28);
			else
				printf("%04d.%02d.%02d",year,month,day+2);
		}
		else if(month==2)
		{
			if(day==28||day==29)
				printf("%04d.%02d.%02d",year,month+1,day-27);
			else
				printf("%04d.%02d.%02d",year,month,day+2);
		}
	}
	else
	{
		if(month==1||month==3||month==5||month==7||month==8||month==10)	
		{
			if(day==30||day==31)
				printf("%04d.%02d.%02d",year,month+1,day-29);
			else
				printf("%04d.%02d.%02d",year,month,day+2);
		}
		else if(month==12)
		{
			if(day==30||day==31)
				printf("%04d.%02d.%02d",year+1,month-11,day-29);
			else
				printf("%04d.%02d.%02d",year,month,day+2);
		}
		else if(month==4||month==6||month==9||month==11)
		{
			if(day==29||day==30)
				printf("%04d.%02d.%02d",year,month+1,day-28);
			else
				printf("%04d.%02d.%02d",year,month,day+2);
		}
		else if(month==2)
		{
			if(day==27||day==28)
				printf("%04d.%02d.%02d",year,month+1,day-26);
			else
				printf("%04d.%02d.%02d",year,month,day+2);
		}
	}
	return 0;
}