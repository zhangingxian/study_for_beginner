//
// Created by  yuan on 2021/11/28.
//
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
double a1,a2,b1,b2;char a;
while(cin>>a1>>a2>>b1>>b2>>a)
{
   double c1,c2;
   switch(a)
   {
       case '-':c1=a1-b1;c2=a2-b2;break;
       case '+':c1=a1+b1;c2=a2+b2;break;
       default: break;
   }
   cout<<fixed<<setprecision(4)<<c1<<" "<<c2<<endl;
}
}

