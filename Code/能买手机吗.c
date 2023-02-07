#include<stdio.h>
int main( )
{
	int price;
	float hour;
	scanf("%d",&price);
	hour=(1.0*price-3200)/40;
	if(price<=3200)
		printf("不需加班,可购买");
	else if(price>3200&&price<=4800)
	{
		if(hour>(int)(hour))
		printf("需加班%d小时,可购买",(int)(hour+1));
		else if(hour==(int)(hour))
			printf("需加班%d小时,可购买",(int)(hour));
	}
		
	else if(price>4800)
	{
		if(hour>(int)(hour))
			printf("需加班%d小时,买不起",(int)(hour+1));
		else if(hour==(int)(hour))
			printf("需加班%d小时,买不起",(int)(hour));
	}
	return 0;
}
