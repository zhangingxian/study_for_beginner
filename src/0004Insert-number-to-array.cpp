//
// Created by  yuan on 2021/11/20.
//
#include <iostream>
using namespace std;
int main()
{
    int x[10];
    for(int i=0;i<10;i++)
    {
        cin>>x[i];
    }//接收一个长度为10的数组
    int k;
    while(cin>>k)//输入一个数
    {
        for(int i=0;i<10;i++)
        {
            if(k<=x[i])//判断大小并插入
            {
                for (int j = 9; j > i; j--)
                {
                    x[j] = x[j - 1];
                }
                x[i]=k;
                break;//结束循环
            }
        }
         cout<<x[0];//输出插入数字后的新数组
        for(int i=1;i<10;i++)
            cout<<" "<<x[i];
        cout<<endl;
    }
}
