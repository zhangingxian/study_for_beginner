//
// Created by  yuan on 2021/11/16.
//
#include<iostream>
using namespace std;

int main()
{
    int n;
    char a;//输入三角形的行数和字符
    while(cin>>n>>a)
    {
        int j =1,t=1;
        for(int i =0;i<n;i++)
        {
            int k =n-t;//空格的个数
            for(;k>0;k--)
                {
                    cout<<" ";
                }
            t++;//记录
            for(int m =2*j-1;m>0;m--)//字符的个数
                {
                    cout<<a;
                }
            j++;//改变记录
            cout<<endl;
        }
    }
}
