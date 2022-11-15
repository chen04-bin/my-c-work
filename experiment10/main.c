#include <stdio.h>
#include <stdlib.h>
struct Stu_Score{
    int mid;
    int end;
    int average;
};
int main()
{
    struct Stu_Score score;
    while(scanf("%d %d",&score.mid,&score.end)!=EOF)
    {
        score.average=(score.mid+score.end)/2;
        printf("%d\n",score.average);
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
struct Date
{
   int year;
   int month;
   int day;
};
int main()
{
    struct Date DAY;
    int i,k,n,mOnth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},sum_day;
    while(scanf("%d-%d-%d",&DAY.year,&DAY.month,&DAY.day)!=EOF)
    {
        sum_day=0;
        for(i=2001;i<=DAY.year;i++)                     //输入年份距离开始时间的满足整年的天数
        {
            if((i%4==0&&i%100!=0)||(i%4==0&&i%400==0))
                k=1;
            else
                k=0;
            sum_day=sum_day+365+k;
        }
        for(i=1;i<DAY.month;i++)
            sum_day=sum_day+mOnth[i];                                   //满足整月的天数
        n=(DAY.year%4==0&&DAY.year%100!=0)||(DAY.year%4==0&&DAY.year%400==0);
        if(DAY.month==2&&DAY.day==29)
            n=0;
        sum_day=sum_day+DAY.day+n;
        if(sum_day%5==0||sum_day%5==4)
            printf("晒网\n");
        else
            printf("打鱼\n");
    }
    return 0;
}


/*int main()
{
    struct Date x;
    int f,s,i,y[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d-%d-%d",&x.year,&x.month,&x.day)!=-1)
    {
        s=0;
        for(i=1;i<x.year;i++)//统计公元1年到前一年共有多少天
        {
            if((i%4==0&&i%100!=0)||(i%4==0 && i%400==0))
                f=1;
            else
                f=0;
            s=s+365+f;
        }
        f=0;
        if((x.year%4==0 && x.year%100!=0)||(x.year%4==0 && x.year%400==0))
              f=1;
        for(i=1;i<x.month;i++)
            s=s+y[i];
        if(x.month>3)//如果是闰年且3月以后，统计天数的时候需要将2月份有29天进行累加
          s=s+x.day+f;
        else
          s=s+x.day;

        if(s%5==0 || s%5==4)
            printf("晒网\n");
        else
            printf("打鱼\n");
    }
	return 0;
}*/



/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Dist
{
   float x;
   float y;
};
float fun(struct Dist l1,struct Dist l2);
int main()
{   struct Dist *p;
    int n,i,j;
    float min;
    while(scanf("%d",&n)!=-1)
    {
        p=(struct Dist*)malloc(sizeof(struct Dist));
        for(i=0;i<n;i++)
           scanf("%f%f",&p[i].x,&p[i].y);
        min=1000000;
        for(i=0;i<n;i++)
        {
           for(j=0;j<n;j++)
              if(i!=j && min>fun(p[i],p[j])) min=fun(p[i],p[j]);
        }
     printf("%.1f\n",min);
    }
	return 0;
}
float fun(struct Dist l1,struct Dist l2)
{
    return sqrt((l1.x-l2.x)*(l1.x-l2.x)+(l1.y-l2.y)*(l1.y-l2.y));
}
*/
