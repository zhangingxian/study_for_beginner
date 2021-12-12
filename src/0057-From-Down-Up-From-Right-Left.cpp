//
// Created by  yuan on 2021/12/10.
//

#include<iostream>
#include<cmath>
using namespace std;
#define Max 10
typedef struct TreeNode//树结构体
{
    char data;//存放的数据类型
    TreeNode *lchild,*rchild;//左右儿子
} *tree;

void buildtree(tree &t)//创建树
{
    char ch;
    cin>>ch;
    if(ch=='#')//以字符#代表空结点
        t=NULL;
    else
    {
        t=(TreeNode*)malloc(sizeof(TreeNode));//开辟空间
        t->data=ch;//数据
        t->lchild=NULL;
        t->rchild=NULL;
        buildtree(t->lchild);//递归
        buildtree(t->rchild);
    }
}

typedef struct stack1//栈
{
   struct TreeNode *data[Max] ;
   int top;//栈顶
}stack1;
bool isempty(stack1 s)//判断栈是否为空
{
    if(s.top==-1) return true;
    else return false;
}
bool isfull(stack1 s)//栈是否满
{
    if(s.top==Max-1)  return true;
    else return false;
}
bool enters(stack1 &s,TreeNode *p)//进栈
{
    if(isfull(s))//先判断是否栈满
    {
        cout<<"栈满\n";
        return false;
    }
    else//进栈
    {
        s.data[++s.top]=p;
        return true;
    }
}
bool outs(stack1 &s,TreeNode *&p)//出栈
{
    if(isempty(s))
    {
        cout<<"栈满\n";
        return false;
    }
    else
    {
       p=s.data[s.top--];
        return true;
    }
}
struct squeue1//创建队列
{
    struct TreeNode *data[Max];
    int f,r,tag;
};
bool entersqueue(squeue1 &s,TreeNode *x)//进队
{
    if(s.f==s.r&&s.tag==1)
    {
        cout<<"队满\n";
        return false;
    }
    else
    {
        s.data[s.r]=x;
        s.r=(s.r+1)%Max;
        s.tag=1;
        return true;
    }
}
int outssqueue(squeue1 &s,TreeNode *&x)//出队
{
    if(s.f==s.r&&s.tag==0)
    {
       cout<<"队空\n";
       return 0;
    }
    else
    {
        x=s.data[s.f];
        s.f=(s.f+1)%Max;
        s.tag=0;
        return 1;
    }
}
void solve(tree t)//从下往上，从右到左，遍历输出
{
    stack1 s;//说明栈
    squeue1 q;//说明队
    TreeNode *p;//定义树指针
    if(t)//树不为空
    {
        s.top=-1;
        q.f=q.r=q.tag=0;//进行赋值
        entersqueue(q,t);//进队
        while(!(q.f==q.r&&q.tag==0))//没明白
        {
            outssqueue(q,p);//出队
            enters(s,p);//压入栈
            if(p->lchild) entersqueue(q,p->lchild);//对左右结点进队
            if(p->rchild) entersqueue(q,p->rchild);
        }
        while(!isempty(s))//最后把栈中的数据弹出即为所求结果
        {
            outs(s,p);
            cout<<p->data<<" ";
        }

    }
}
int main()
{
tree t;
buildtree(t);
solve(t);
return 0;
}

