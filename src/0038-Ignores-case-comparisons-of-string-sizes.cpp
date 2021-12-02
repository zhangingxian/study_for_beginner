//
// Created by  yuan on 2021/12/2.
//

#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
bool num(int n)//判断是不是素数
{int count =0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){count++;break;}
    }
    if(count==0)return true;
    else return false;
}
int reverse1(int n)//逆序输出
{
    int arr1[50] ,a=0;
    for(int i=0;n!=0;i++)//求每一位
    {
        arr1[i]=n%10;
        n/=10;
        a++;
    }
    int b=a-1;
    int sum =0;
    for(int j=0;j<a;j++)
    {
        sum+=arr1[j]*pow(10.0,b);b--;//注意数值a,b
    }
    return sum;//逆序
}

int main()
{
int k;
while(cin>>k)
{
    for(int i=2;;i++)
    {
        if(num(i)&&)
    }
}
{

}
}

