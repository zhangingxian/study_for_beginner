//
// Created by  yuan on 2021/11/15.
//
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   int a,b,c=1;
   while(cin>>a>>b) {
       for (int i = 0; i < b; i++) {
           c *= a;
           c %= 1000;//要获取幂的最后三位，每乘一次，取模1000
       }
       cout << setw(3) << setfill('0') << c << endl;//三位输出，不够三位的用零补齐
   }
}
