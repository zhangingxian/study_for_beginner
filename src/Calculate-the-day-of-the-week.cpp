//
// Created by  yuan on 2021/11/15.
//
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int a,b,d=1;
  while(cin>>a>>b)
  {
     for(int i =1;i<=b;i++)//b次方
     {
         d=d*a%7;//每乘一次取一次模，要不会数值溢出
     }

      switch(d)//判断输出
      {
          case 0:cout<<"Sunday"<<endl;
          break;
          case 1:cout<<"Monday"<<endl;
          break;
          case 2:cout<<"Tuesday"<<endl;
          break;
          case 3:cout<<"Wednesday"<<endl;
          break;
          case 4:cout<<"Thursday"<<endl;
          break;
          case 5:cout<<"Friday"<<endl;
          break;
          case 6:cout<<"Saturday"<<endl;
          break;
          default:break;
      }

  }

}
