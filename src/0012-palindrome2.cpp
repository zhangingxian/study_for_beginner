//
// Created by  yuan on 2021/11/26.
//
//回文数2.0
#include <iostream>
#include<cmath>
using namespace std;
int reverse1(int n);//函数声明，最好不写参数
int main()
{
   int L;cin>>L;//测试案例数
   while(L--)
   {
      int M;
      cin>>M;
      for(int i=1;;)
      {
         int b=M+reverse1(M);
         if(b==reverse1(b)&&i<=8)
         {
             cout<<i<<endl;break;
         }
         else if(b==reverse1(b)&&i>8)
         {
           cout<<"0"<<endl;break;
         }
         else
         {
             M=b;//循环
         }
         i++;
      }
   }
}
int reverse1(int n)//逆序输出
{
    int arr1[50] ,a=0;
    for(int i=0;n!=0;i++)//求每一位
    {
        arr1[i]=n%10;
        n/=10;
        a++;
    }
    int b=a-1;
    int sum =0;
    for(int j=0;j<a;j++)
    {
        sum+=arr1[j]*pow(10.0,b);b--;//注意数值a,b
    }
    return sum;//逆序
}
