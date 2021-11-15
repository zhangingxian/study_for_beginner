//
// Created by  yuan on 2021/11/15.
//
#include<iostream>
using namespace std;

int main()
{
    char ch;int k,m=0;
    while((ch=getchar())!=' ')//获取字符串以空格结束
    {
        if(ch=='3')m++;//记录3的个数
    }
   cin>>k;
    if(k==m)//判断是否个数相等
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
