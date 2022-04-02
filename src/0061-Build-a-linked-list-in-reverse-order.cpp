//
// Created by  yuan on 2021/12/12.
//

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct node
{
    int data;
    node *next;
};
void creat(node *&head)//建立以head为头结点的输入逆序链表
{
    node *p;
    p=new node;//开辟空间
    cin>>p->data;//输入数据
    while(p->data!=0)//以0结束
    {
        if(head==NULL)//建立链表
        {
            head=p;
            head->next=NULL;
        }
        else
        {
            p->next=head;
            head=p;
        }
        p=new node;
        cin>>p->data;
    }
}
int main()
{
    node *t=NULL;
    creat(t);
    while (t)
    {
        cout << t->data<<" ";
        t = t->next;
    }

}

