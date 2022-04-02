//
// Created by  yuan on 2021/12/13.
//
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct List//结构体，成员有数据和指针
{
    int data;
    List *next;
};
void creat(List *&head)//建立链表
{
    List *s,*p;
    s=new List;//开辟空间
    cin>>s->data;//输入数据
    while(s->data!=0)//以0结束
    {
      if(head==NULL)//头结点为空
          head=s;
      else
      {
          p->next=s;
          p=s;
          s=new List;
          cin>>s->data;
      }
    }
    p->next=NULL;
    delete s;
}
void del(List * & head,int key)
{
    List *p;
    if(!head)
    {
        cout<<"List null!\n";
        return;
    }
    if(head->data==key)
    {
        p=head;
        head=head->next;
        delete p;
        p=NULL;
        return;
    }
    for(List *pg=head;pg->next;pg=pg->next)
    {
        if(pg->next->data==key)
        {
            p=pg->next;
            pg->next=p->next;
            delete p;
            p=NULL;
            return;
        }
    }
}
void showlist(List *head)
{
    while(head)
    {
        cout<<head->data<<" \t";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    List *head=NULL;
    creat(head);
    int k;
    cin>>k;
    del(head,k);
    showlist(head);
}
