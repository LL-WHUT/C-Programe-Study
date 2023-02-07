#include<stdio.h>
int main()
{
	int N,y,count=0,i,l,m_1,m_2,r,t;
	scanf("%d",&N);
	int a[21];
	for(i=1;i<=N;i++)
	scanf("%d",&a[i]);
	scanf("%d",&y);
	l=1;r=N;
	while(1)
	{
		m_1=(l+r)/2;m_2=(l+r+1)/2;count++;
		if(a[m_1]==y||a[m_2]==y)
		{
		t=1;break;
		}
		else if(a[m_1]>y)
		{
			r=m_1;
		}
		else if(a[m_2]<y)
		{
			l=m_2;
		}
		if(l==r&&l==m_1&&r==m_2||(a[m_1]<y&&a[m_2]>y))
		{
			t=0;break;
		}
	}
	if(t==0) printf("not found");
	else if(t==1)
	{
		printf("查找次数%d\n",count);
		while(a[m_1]==y) m_1--;
		while(a[m_2]==y) m_2++;
		for(;m_1<=(m_2-2);m_1++)
			printf("位置:%d\n",m_1);
	}
	return 0;
}