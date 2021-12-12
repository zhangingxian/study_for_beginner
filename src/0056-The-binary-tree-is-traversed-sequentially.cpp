#include <iostream>
#include <algorithm>
using namespace std;
//后序遍历 非递归 输出
//指针强大
typedef struct TreeNode//结构体
{
    char data;//树中的数据类型
    struct TreeNode *lchild,*rchild;//左儿子，右儿子
    int tag;//标志域，是否被遍历过
}  *tree;//tree是TreeNode类型的指针变量，可以在定义结构体后，直接说明变量

void creattree(tree &t)//创建二叉树
{
    char ch;
    cin>>ch;//输入
    if(ch=='#')//什么地方是空，输入数据的时候，叶子结点的左右儿子都为空
        t=NULL;
    else
    {
        t=(TreeNode*)malloc(sizeof(TreeNode));//给根结点分配空间
        t->data=ch;//输入字符
        t->tag=0;//标志域
        t->lchild=NULL;//左右儿子都是NULL
        t->rchild=NULL;
        creattree(t->lchild);//递归构造
        creattree(t->rchild);
    }
}

void back(tree t)//后序遍历 非递归 输出
{
    struct TreeNode *stack[100];//利用结构体构造栈
     int top=-1;//栈名指针
    TreeNode *p=t;//指针指向这棵树的根
    TreeNode *x;//出栈的时候需要保存
    while(p||top!=-1)//树不能为空或栈不能为空
    {
        if(p)//树不为空
        {
            top++;//进栈
            stack[top]=p;//把这个节点压入栈
            p=p->lchild;//随后指向左儿子
        }
        else//如果p为空
        {
            p=stack[top];//读取栈点
           if(p->rchild&&p->rchild->tag==0)//右儿子不为空并且没有被访问过
                p=p->rchild;//就让p指向它的右儿子
           else
           {
              p=stack[top];
              top--;//出栈
              cout<<p->data<<" ";//打印输出
              p->tag=1;//改变标志域，说明被访问过
              p=NULL;//并让p指向空
           }
        }
    }

}
//输入格式要规范
//Input ABD##E##C##
//Output D E B C A
int main()
{
    tree t;
    creattree(t);
    back(t);
    return 0;
}
