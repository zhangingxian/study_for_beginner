//
// Created by  yuan on 2021/12/12.
//

//输出数字三角型，以递归方式建立程序
#include<iostream>
using namespace std;
void printN(int n)
{
    if(n)
    {
        printN(n-1);
        cout<<n<<" ";
    }
}
void print(int w)
{
    if(w)
    {
        print(w-1);
        printN(w);
        cout<<endl;
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        print(n);
    }
}
