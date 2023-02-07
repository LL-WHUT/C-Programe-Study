#include <stdio.h>
#include <math.h>
#define MAX 20  //��������������Ը���

//��������������
int DET(int arr1[MAX][MAX],int n);
int Minor(int arr1[MAX][MAX],int i,int n);


int DET(int arr1[MAX][MAX],int n)
{
	int i,M,sum=0;//i�ǵ�һ�е���ָ�꣬M������ʽ��ֵ��sum������ʽ�ļ���ֵ
	if(n==1)//һ������ʽֱ�ӵó����
		return arr1[0][0];
	else if(n>1)
	{
		for(i=0; i<n; i++)//����һ��չ��
		{
			M=Minor(arr1,i,n);
			sum+=pow(-1,i+2)*arr1[0][i]*M;
		}
	}
	return sum;
}


int Minor(int arr1[MAX][MAX],int i,int n)
{
	int  j,k,result;
	int arr2[MAX][MAX];

	//����Ϊ��������ʽ�Ĺ��̡�����C���Ե����ԣ�������̻�Ƚϸ��ӣ���Ҫ�۲�����ʽ��ԭ����ʽ�Ĺ�ϵ��
	for(j=0; j<n-1; j++)
	{
		for(k=0; k<n-1; k++)
		{
			if(k<i)
				arr2[j][k]=arr1[j+1][k];
			else if(k>=i)
				arr2[j][k]=arr1[j+1][k+1];
		}
	}

	return DET(arr2,n-1);//�����������ʽ��һ���µ�����ʽ������DET�������м��㡣
}


int main()
{
	int arr1[MAX][MAX];
	int a,b,n;
	printf("����������ʽ������");
	scanf_s("%d",&n);
	printf("����������ʽ��\n");
	for(a=0; a<n; a++) {
		for(b=0; b<n; b++) {
			scanf_s("%d",&arr1[a][b]);
		}
	}

	printf("%d",DET(arr1,n));
}
