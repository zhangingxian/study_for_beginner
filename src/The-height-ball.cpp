//
// Created by  yuan on 2021/11/15.
//
#include<iostream>
using namespace std;

int main()
{
    double h;

    while(cin>>h)
    {
        double sum=h;//记录第一次下落的高度
        for(int i =0;i<9;i++)
        {
            h/=2.0;
            sum+=2.0*h;//计算十次弹跳经过的总路程，其余几次要是二倍
        }
        cout<<sum<<'\n'<<h/2.0<<endl;//输出最后一次弹跳的高度
    }

}
