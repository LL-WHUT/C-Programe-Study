#include<stdio.h>
int main()
{
	int N,t=1,i,m,n;
	char c;
	scanf("%d %c",&N,&c);
	while(((N-2*t*t+1)>=0))
		t++;
	t--;	//tΪһ�������εĸ�
	for(i=t;i>=1;i--)	//��ӡ������
	{
		for(m=1;m<=(t-i);m++)
			printf(" ");	//��ӡ�ո�
		for(n=1;n<=(2*i-1);n++)
			printf("%c",c);	//��ӡ����
		printf("\n");	//��ӡ�س�
	}
	for(i=1;i<t;i++)	//��ӡ�·�����
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