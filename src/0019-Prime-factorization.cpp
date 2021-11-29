//
// Created by  yuan on 2021/11/28.
//质因数分解
#include <iostream>
using namespace std;
int main()
{
   int n;//n为两个质数相乘的结果，找出最大的那个因子
   while(cin>>n)
   {
       for(int i=2;i<=n;i++)
       {
          if(n%i==0)
          {
              cout<<n/i<<endl;
              break;
          }
       }
  return 0;
   }
}

