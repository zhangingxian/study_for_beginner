//
// Created by  yuan on 2021/11/16.
//
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int sum =0;
        int power;
        for( int i =1;i<=n;i++)//外层循环求和
        {
            power=1;//重置数值
            for(int j =1;j<=i;j++)//内层循环求阶乘
            {
               power*=j;
            }
            sum+=power;
        }
         cout<<sum<<endl;
    }
}
