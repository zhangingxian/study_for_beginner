//
// Created by  yuan on 2021/11/30.
//当且仅当结果不是整数时应该四舍五入到小数点后2位。
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
  int n;cin>>n;
  while(n--)
  {
      char c;double a,b,d=0;
      cin>>c>>a>>b;
      switch(c)
      {
          case '+':d=a+b;break;
          case '-':d=a-b;break;
          case '*':d=a*b;break;
          case '/':d=a/b;break;
          default:break;
      }
      double f=d;
      double p=modf(f,&f);
      if(p==0)
          cout<<fixed<<setprecision(0)<<d<<endl;
      else
          cout<<fixed<<setprecision(2)<<d<<endl;
  }
}

