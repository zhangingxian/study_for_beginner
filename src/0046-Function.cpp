
//
// Created by  yuan on 2021/12/4.
//

#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;
//数组中最大值、最小值、求和函数
int main()
{
int n;
while(cin>>n)
{
    int *p=new int[n];
    for(int i=0;i<n;i++)
        cin>>p[i];
    cout<<(*min_element(p,p+n))<<" "<<(*max_element(p,p+n))<<endl;//在algorithm中
cout<<accumulate(p,p+n,0)<<endl;//数组元素求和函数，numeric函数库
}
}

