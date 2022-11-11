#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    long long  func(int n);
    while(scanf("%d",&n)!=EOF)
    {
      printf("%lld\n",func(n));
    }
    return 0;
}
//start
long long func(int n)
{
    long long i,fac=1;
    for(i=2;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}
//end

 #include <stdio.h>
 #include <stdlib.h>
int main()
{
    int x,y;
    long z;
    long IntPower(int base,int exp);
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        z=IntPower(x,y);
        printf("%ld\n",z);
    }
    return 0;
}
 //start
 long IntPower(int base,int exp)
 {
     long x=1,i;
     for(i=0;i<exp;i++)
     {
         x=base*x;
     }
     return x;
 }
 //end
