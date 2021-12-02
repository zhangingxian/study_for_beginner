//
// Created by  yuan on 2021/12/2.
//
#include <iostream>
using namespace std;
struct customer//创建结构体
{
    int num;
    char name[20];
    char gender;
    int ip;
    int op;
};
void app(customer *&pa,int n)//开辟一维数组
{
    pa=new customer[n];
}
int main()
{
   customer *x=NULL,*t;
   int n;
   while(cin>>n)
   {
       app(t=x,n);
       for(int i=0;i<n;i++)//数据输入
       {
          cin>>t[i].num>>t[i].name>>t[i].gender>>t[i].ip>>t[i].op;
       }
       int sumM=0,sumW=0;
       for(int i=0;i<n;i++)
       {
           if(t[i].gender=='M')sumM+=(t[i].ip-t[i].op);
           if(t[i].gender=='W')sumW+=(t[i].ip-t[i].op);
       }
       cout<<"M"<<sumM<<" W"<<sumW<<endl;//第一行输出
       int p[1000];
       for(int i=0;i<n;i++)
       {
           p[i]=t[i].ip-t[i].op;
       }
       int  q,g;
       customer max1;
       for (int i = 0; i < n; i++)//选择排序
       {
           q = i;
           for (int j = i + 1; j < n; j++)
               if (p[j] > p[q])q = j;//从大到小
           if (q != i)
           {
               max1 = t[i];g=p[i];//注意值交换
               t[i] = t[q];p[i]=p[q];
               t[q] = max1;p[q]=g;
           }
       }
       for(int i=0;i<n;i++)//输出格式
       {
           if(t[i].op>=p[i])cout<<t[i].num<<t[i].name<<" ";
           else cout<<t[i].name<<" ";
       }cout<<endl;
   }
}

