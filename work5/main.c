#include <stdio.h>
#include <stdlib.h>

int main()
{
    //班长选举
    int a[30],i,max,k,n;
    while(scanf("%d",&n)!=EOF)
    {
        int b[30]={0};
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            k=a[i];
            b[k]++;
        }
        max=0;
        for(i=1;i<=n;i++)
        {
            if(max<b[i])
                max=b[i];
        }
        for(i=1;i<=n;i++)

            if(b[i]==max)
                printf("%d ",i);
        printf("\n");
    }
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //统计分数
    float a[10]={0},k,max,min;
    int i;
    while(scanf("%f",&a[0])!=EOF)
    {
        k=a[0];
        max=a[0];
        min=a[0];
        for(i=1;i<10;i++)
        {
            scanf("%f",&a[i]);
            if(max<a[i])
                max=a[i];
            if(min>a[i])
                min=a[i];
        }
        for(i=1;i<10;i++)
        {
            k=k+a[i];
        }
        k=(k-max-min)/8.0;
        printf("%.3f\n",k);
    }
}
