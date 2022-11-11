#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
    int i,fac=1;
    for(i=2;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}

int main()
{
    int factorial(int n);
    int i,j,k,n;
    float e;
    while(scanf("%d",&n)!=EOF)
    {
        e=1;
        for(i=1;i<n;i++)
        {
            e=e+1.0/factorial(i);
        }
        printf("%.4f\n",e);
    }
}
//求e

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    double pai,k;
    while(scanf("%d",&n)!=EOF)
    {
        k=1;
        pai=0;
        j=1;
        for(i=0;i<n;i++)
        {
            pai=pai+k/j;
            j=j+2;
            k=k*(-1);
        }
        pai=pai*4;
        printf("%.10lf\n",pai);
    }
}
//求pai
