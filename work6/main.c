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

