#include<stdio.h>
int main( )
{
	int price;
	float hour;
	scanf("%d",&price);
	hour=(1.0*price-3200)/40;
	if(price<=3200)
		printf("����Ӱ�,�ɹ���");
	else if(price>3200&&price<=4800)
	{
		if(hour>(int)(hour))
		printf("��Ӱ�%dСʱ,�ɹ���",(int)(hour+1));
		else if(hour==(int)(hour))
			printf("��Ӱ�%dСʱ,�ɹ���",(int)(hour));
	}
		
	else if(price>4800)
	{
		if(hour>(int)(hour))
			printf("��Ӱ�%dСʱ,����",(int)(hour+1));
		else if(hour==(int)(hour))
			printf("��Ӱ�%dСʱ,����",(int)(hour));
	}
	return 0;
}
