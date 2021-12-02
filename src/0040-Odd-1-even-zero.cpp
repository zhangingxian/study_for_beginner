//
// Created by  yuan on 2021/12/2.
//一个数字的每一位如果是奇数，则为1，否则为零
#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   while(cin>>n)
   {
       int x[100];int t=n;int a=0;
       for(int i=0;t!=0;i++)
       {
           x[i]=t%10;
           t/=10;a++;
       }
       int y[100];
       for(int i=0;i<a;i++)
       {
           if(x[i]%2==0)y[i]=0;
           if(x[i]%2==1)y[i]=1;
       }
       int sum=0;//考虑每一位都是偶数
       for(int i=a-1;i>=0;i--)
       {
           if(y[i]==0)sum++;
       }
       if(sum==a)cout<<"0\n";
       else
       {
       for(int i=a-1;i>=0;i--)//从第一个不为零的数之后开始输出
       {
           if(y[i]==1)
           {
            for(int j=i;j>=0;j--)
                cout<<y[j];
            break;
           }
           if(y[i]==0)continue;
       }

       cout<<endl;}
   }
}

