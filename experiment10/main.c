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
        sum_day=sum_day+DAY.day+n;
        if(sum_day%5==0||sum_day%5==4)
            printf("晒网\n");
        else
            printf("打鱼\n");
    }
    return 0;
}



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
