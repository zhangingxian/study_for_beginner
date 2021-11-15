//
// Created by  yuan on 2021/11/15.
//
#include<iostream>
using namespace std;
//角谷猜想
int main()
{
    int a;
    while(cin>>a)
    {
        for(;a!=1;)//a不等于1就循环
        {
            if (a % 2 == 1 && a != 1)//是奇数就乘三加一
            {
                cout << a << "*3+1=" << a * 3 + 1 << endl;
                a = a * 3 + 1;
            }
            if (a % 2 == 0)//是偶数就除于2
            {
                cout << a << "/2=" << a / 2 << endl;
                a/=2;//记录改变后的值
            }
        }
        cout<<"End"<<endl;//结束
    }
}
