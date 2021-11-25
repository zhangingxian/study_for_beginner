//
// Created by  yuan on 2021/11/25.
//
#include <iostream>
using namespace std;
void app(int ** &pa,int m,int n);//函数声明
int main ()
{
  int **ary1 =NULL,**ary2=NULL,**ary3=NULL,**t,**p,**e;//定义
  int m,n,a,b;
  cin>>m>>n;
  app(t=ary1,m,n);//开辟并输入第一个数组
  for(int i=0;i<m;i++)
  { for(int j=0;j<n;j++)
      {
          cin>>t[i][j];
      }
  }
  cin>>a>>b;
    app(p=ary2,a,b);//开辟并输入第二个数组
    for(int i=0;i<a;i++)
    { for(int j=0;j<b;j++)
        {
            cin>>p[i][j];
        }
    }
  app(e=ary3,m,b);
    for(int i=0;i<m;i++)//矩阵相乘
    {
        for(int j=0;j<b;j++)
        {
            for(int k=0;k<n;k++)
            {
                e[i][j]+=t[i][k]*p[k][j];//注意引用，否则找不到开辟的内寸
            }
        }
    }
    for(int i=0;i<m;i++)//输出相乘之后的矩阵
    {
        for(int j=0;j<b;j++)
        {
            cout<<e[i][j]<<" ";
        }
        cout<<endl;//以矩阵的格式输出
    }

  delete []*ary1;
    delete []*ary2;delete []*ary3;
  ary1=NULL;ary2=NULL;ary3=NULL;//释放内存，并指向空指针
}
void app(int ** &pa,int m,int n)//开辟二维数组，要用二级指针，参数
{
    pa = new int*[m];//注意形式
    if(pa==NULL)
    {
        cout<<"allocation failure";
        return;
    }
    for(int k=0;k<m;k++)
    {
        pa[k]=new int[m];
        for(int i=0;i<n;i++)
        {
            pa[k][i]=0;//数组初始化
        }
    }
}

