//
// Created by  yuan on 2021/12/13.
//

//
// Created by  yuan on 2021/12/13.
//
#include<cstdio>
#include<cstdlib>
extern int RandInt(int i, int j);
void RandomPermutation1(int n);
void RandomPermutation2(int n);
void RandomPermutation3(int n);
void swap(int*, int*);//我不理解，这是函数声明吧，为啥和下面的函数定义参数类型不一样啊（所以我改了）
int main()
{
    return 0;
}
void swap(int* a,int* b)//函数参数是指针，可以改变实参，就是交换
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void RandomPermutation1(int n)//算法一
{
    int x;
    int* a=NULL;
    if(n<=0)//n是数组元素个数，输入的n要有意义
    {
        printf("error");
        exit(-1);//中断程序的执行，返回退出代码，回到C++系统的主窗口
    }
    a = (int*)malloc(sizeof(int)*n);//给根结点分配空间（这是在学习二叉树的时候的解释，类比一下）
    if (a==NULL)//这个地方应该是看空间是否分配成功
    {
        printf("error");
        exit(-1);
    }
    for(int i=0;i<n;i++)
    {
        x=RandInt(1,n);//随机产生数
        for(int j=0;j<i;j++)//判断是否用过这个随机数
        {
            if(x==a[j])
            {
                x=RandInt(1,n);
                j=-1;
            }
        }
        a[i]=x;//是新的随机数就存放到数组中（这思路牛啊牛啊，学到了学到了）
    }
    for (int i=0;i<n;i++)
    {
        printf("%d,",a[i]);//这是C语言中的数组输出吧
        if(i==n-1) printf("0\n");
    }
    free(a);//这相当于C++中的delete吧，释放空间（有点不懂
}
void RandomPermutation2(int n)//算法二
{
    int x;
    if(n<=0)//同上
    {
        printf( "error" ) ;
        exit(-1);
    }
    int* b=NULL;
    b=(int*)malloc(sizeof(int)*n);
    if (b==NULL)//同上
    {
        printf("error");
        exit(-1);
    }
    int* used=NULL;//和算法一不一样的地方
    used=(int*)malloc(sizeof(int)*n);//同上
    if(used==NULL)
    {
        printf("error");
        exit(-1);
    }
    for (int i=1;i<=n;++i) used[i]=0;//数组初始化
    for (int i=0;i<n;i++)
    {
        x=RandInt(1,n);//产生随机数
        while(used[x]!=0)//这个更厉害啊，比算法一简化了，酷
            x=RandInt(1,n);
        b[i]=x;
        used[x]=1;
    }
    for (int i=0;i<n;i++)//同上
    {
        printf("%d,",b[i]);
        if(i==n-1) printf("0\n");
    }
    free(used);
    free(b);
}
void RandomPermutation3(int n)//算法三
{
    int* c=NULL;
    if(n<=0)//同上
    {
        printf("error");
        exit(-1);
    }
    c=(int* )malloc(sizeof(int)*n);
    if (c==NULL)//同上
    {
        printf("error");
        exit(-1);
    }
    for (int i=0;i<n;i++)//按要求赋值
        c[i]=i+1;
    for (int i=1;i<n;i++)//数组中的元素一一交换
        swap(&c[i],&c[RandInt(0, i)]);
    for (int i=0;i<n;i++)
    {
        printf("%d,",c[i]);
        if(i==n-1) printf("0\n");
    }
    free(c);
}
