//
// Created by  yuan on 2021/12/13.
//

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
//把数据插入有序链表
void creat(Node *&head,int num)
{
    Node *s,*p,*q;
    s=new Node;
    s->data=num;
    s->next=NULL;
    if(head==NULL)//若表空，则建立一个结点的链表
    {
        head=s;
        return;
    }
    else
    {
        if(head->data>s->data)//被插数据最小，插入表头
        {
            s->next=head;//在表头插入数据
            head=s;
        }
        else
        {
            for(q=head,p=head->next;p;q=p,p=p->next)//搜索插入
            {
                if(p->data>s->data)
                {
                    s->next=p;//插入结点之前
                    q->next=s;
                    return;
                }
            }
            q->next=s;//被插数据最大，插入表尾
            return;
        }

    }
}
//输出链表数据
void shownode(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
Node *head=NULL;
int k;
cin>>k;
while(k!=0)
{
    creat(head,k);//建立有序链表
    cin>>k;
}
shownode(head);//输出链表数据
cout<<endl;
}

