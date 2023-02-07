#include<stdio.h>
int main()
{
	int year,leap_year,a;
	leap_year=2004;
	a=0;
	scanf("%d",&year);
	if(year<=2000||year>2100)
		printf("Invalid year!");
	else if(year>2000&&year<2004)
		printf("None");
	else if(year>=2004&&year<2008)
		printf("2004");
	else if(year>=2008&&year<2012)
		printf("2004\n2008");
	else if(year>=2012&&year<2100)
	{
		while(leap_year<(year-4-year%4))
		{
			leap_year=2004+4*(a++);
			printf("%d\n",leap_year);
		}
		printf("%d",leap_year+4);
	}
	else if(year==2100)
	{
		while(leap_year<2092)
		{
			leap_year=2004+4*(a++);
			printf("%d\n",leap_year);
		}
		printf("%d",leap_year+4);
	}
	return 0;
}



