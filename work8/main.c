
#include <stdio.h>
#include <stdlib.h>
int main()
{
    //�鼮��¼
    char book[50][50],koob[50][50];
    int i,j,k,n,s;
    while(scanf("%d\n",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            gets(book[i]);
        }
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=0;j<n;j++)
            {
                if(strcmp(book[i],"\0")!=0)
                {
                    strcpy(koob[j],book[s]);
                }
                s++;
            }
        }
        for(i=0;i<n;i++)
        {
            k=0;
            for(j=0;j<n;j++)
            {
                if(strcmp(book[i],koob[j])==0)
                {
                    k++;
                    strcpy(koob[j],"\0");
                }
            }
            if(k!=0)
                printf("%d %s\n",k,book[i]);
        }
    }
    return 0;
}


/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    //�鼮��¼
    char sentence[50][50],word[30];

}




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[301];
    char str[100][30];//��ά�����е�str[i]���浥��
    int i,j,k,n,len,f=0;
    while(gets(a)!=NULL)
    {
        k=0;
        j=0;
        for(i=0;;i++)
        {
            if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
            {
                str[k][j++]=a[i];
            }//����ĸ���뵥����
            else
                if(j>0)//��J>0��ʾ���µ��ʣ���ʱ����������һ��str[i]��
                {
                    str[k][j]='\0';
                    j=0;
                    k++;
                }
            if(a[i]=='\0')
                break;//��ѭ�������������������������for�����У��Ƿ�ֹ���һ������û��ͳ��
        }
        printf("%d\n",k);
        for(i=0;i<=k;i++)
        {
            len=strlen(str[i]);
            for(j=len-1;j>=0;j--)
                printf("%c",str[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}*/
