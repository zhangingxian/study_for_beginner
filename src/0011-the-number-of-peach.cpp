//
// Created by  yuan on 2021/10/16.
//
#include<iostream>
using namespace std;
//蟠桃会
int yuan(int n)
{
    n = (n+1)*2;
    return n;
}
int main()
{
    int n;//第n天的时候剩下一个桃子
    while( cin >> n)
    {
        int a = 1;
        for(int i =1;i<n;i++)//循环
        {
            a =yuan(a);
        }
        cout << a << endl;
    }
}
