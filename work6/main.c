#include <stdio.h>
#include <stdlib.h>
int main()
{
    //����
    int r,c,i,j,k,max,f,a[10][10],fg;
    while(scanf("%d %d",&r,&c)!=-1)
    {
        fg=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            max=a[i][0];                    //�趨��ʼֵ
            for(j=0;j<r;j++)                //Ѱ��ÿ�������ֵ
            {
                if(max<a[i][j])
                    max=a[i][j];
            }
            for(j=0;j<c;j++)                // �ж������ֵ�ǲ�������С
            {
                if(a[i][j]==max)            //���Ԫ�����ڵ���
                {
                    f=1;
                    for(k=0;k<c;k++)        // �Ƿ���������С
                    {
                        if(a[k][j]<max)
                        {
                            f=0;
                            break;
                        }
                    }
                    if(f==1)
                    {
                        printf("%d %d %d\n",i+1,j+1,max);
                        fg++;
                    }
                }
            }
        }
        if(fg==0)
            printf("No\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10],sum,i,j,r,c,k,t,f;
    while(scanf("%d%d%d",&r,&c,&k)!=-1)
    {
        for(i=0;i<r;i++)
        {
            for(j=0; j<c; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r;i++)          //����ÿ��ѧ�����ܳɼ�
        {
            sum=0;
            for(j=0;j<c;j++)
                sum+=a[i][j];
            a[i][c]=sum;
        }
        k=k-1;
        for(i=0;i<r-1;i++)
        {
            for(j=i+1;j<r;j++)
            {
                if(a[i][k]<a[j][k])//�Ե�k�е�Ԫ�رȽϣ������i��Ԫ�ص�ֵС�ڵ�j��Ԫ�ص�ֵ����i�к͵�j��ֵȫ������
                {
                    for(r=0;f<c+1;f++)
                    {
                        t=a[i][f];
                        a[i][f]=a[j][f];
                        a[j][f]=t;
                    }
                }
            }
        }
        for(i=0;i<r;i++)
        {
            printf("%d ",i+1);
            for(j=0;j<=c;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
