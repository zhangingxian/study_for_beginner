//
// Created by  yuan on 2021/11/16.
//
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {double sum=0;
        for(int i=1;i<=n;i++)
        {
            if(i%7==0||i%10==7||i/10==7)//与7有关的数
            continue;
            else
               sum+=i*i;
        }
        cout<<sum<<endl;
    }
}
