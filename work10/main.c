/*#include <stdio.h>
#include <stdlib.h>
struct stu
{
  int data;
  struct stu *next;
};
struct stu *creat(struct stu *head,int n);
void pr(struct stu *head);
struct stu *ins(struct stu *head,struct stu *p0);
int main()
{   int n,m;
    struct stu  *head,*p0;
    head=(struct stu*)malloc(sizeof(struct stu));//申请
    while(scanf("%d",&n)!=-1)
    { head=creat(head,n);
      p0=(struct stu*)malloc(sizeof(struct stu));
      scanf("%d",&p0->data);
      head=ins(head,p0);
      pr(head);
    }
    return 0;
}
struct stu *creat(struct stu *head,int n)
{
    struct stu *tp,*p;
    int i;
    head->next=NULL;//有头
    tp=head;
    p=head->next;
    for(i=0;i<n;i++)
    {
        p=(struct stu*)malloc(sizeof(struct stu));
        scanf("%d",&p->data);
        p->next=tp->next;
        tp->next=p;
        tp=p;
    }
   return head;
}
void pr(struct stu *head)
{
    struct stu *p;
    p=head->next;
    while(p!=NULL)
    {  printf("%d  ",p->data);
        p=p->next;
    }
    printf("\n");
}

struct stu *ins(struct stu *head,struct stu *p0)
{
   struct stu *tp,*p;
   tp=head;
   p=head->next;
   while(p->data<p0->data && p->next!=NULL)
   {
       tp=p;p=p->next;
   }
   if(p0->data<=p->data)
   {tp->next=p0;p0->next=p;}
   else
     {p->next=p0;p0->next=NULL;}
   return head;
}

#include <stdio.h>
#include <stdlib.h>
typedef struct stu
{
  int data;
  struct stu *next;
}LNode;
LNode *creat(LNode*head,int n);
void sea(LNode *head,int n);
int main()
{   int n,m;
    LNode  *head;
    head=(LNode *)malloc(sizeof(LNode));//申请
    while(scanf("%d",&n)!=-1)
    { head=creat(head,n);
      scanf("%d",&m);
      sea(head,m);
    }
    return 0;
}
LNode *creat(LNode *head,int n)
{
    struct stu *tp,*p;
    int i;
    head->next=NULL;//有头
    tp=head;
    p=head->next;
    for(i=0;i<n;i++)
    {
        p=(LNode *)malloc(sizeof(LNode));
        scanf("%d",&p->data);
        p->next=tp->next;
        tp->next=p;
        tp=p;
    }
   return head;
}

void sea(LNode *head,int n)
{
   LNode *p;
   int num=0;
   p=head->next;
   while(p->data!=n && p->next!=NULL)
   {
      p=p->next;num++;
   }
   if(p->next==NULL)
    printf("%d\n",0);
   else
    printf("%d %d\n",num+1,p->data);
}*/
