//
// Created by  yuan on 2021/11/20.
//
#include <iostream>
using namespace std;
void move(int n,char a,char b,char c)
{
    if(n==1)//只有一个金片
        cout<<a<<"->"<<c<<endl;
    else//否则
    {
        move(n-1,a,c,b);//把n-1个金片从a 移到b，以c 为过渡
        cout<<a<<"->"<<c<<endl;//从a移一个金片到c
        move(n-1,b,a,c);//把n-1个金片从 b移到c，以a 为过渡
    }
}
int main()
{
    int m;
    while(cin>>m)
    {
        move(m,'A','B','C');//传入数据
    }
}
