#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double a,t,sum_1,i,i_2,sum_2;
    t=1,i=0,sum_1=0,sum_2=1;
    scanf("%lf %d",&a,&n);
    while(i<=1.0*n)
    {
        sum_1+=t*(pow(a,2*i))/sum_2;
        ++i;
        t=-t;
        sum_2=1;
        for(i_2=1;i_2<=2*i;i_2++)
            sum_2*=i_2;
    }
    printf("cos(%.6lf)=%.6lf",a,sum_1);
    return 0;
}