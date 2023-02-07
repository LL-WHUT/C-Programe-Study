#include<stdio.h>
int main( )
{
	int Pa,Pb,a,b,c;
	scanf("%d %d\n%d %d %d",&Pa,&Pb,&a,&b,&c);
	if(Pa>Pb)
	{
		if((a+b+c)<3)
			printf("The winner is a: %d + %d",Pa,3-a-b-c);
		else if((a+b+c)==3)
			printf("The winner is b: %d + %d",Pb,a+b+c);
	}
	else if(Pa<Pb)
	{
		if((a+b+c)>0)
			printf("The winner is b: %d + %d",Pb,a+b+c);
		else if((a+b+c)==0)
			printf("The winner is a: %d + %d",Pa,3-a-b-c);
	}
	return 0;
}
