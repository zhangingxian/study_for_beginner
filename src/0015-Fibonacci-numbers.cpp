//
// Created by  yuan on 2021/11/26.
//
#include <iostream>
using namespace std;
void app(int *&pa,int n)//开辟一维数组
{
    pa=new int[n];
    for(int i=0;i<n;i++)
        pa[i]=i;
}
int main()
{
 int n;
 while(cin>>n)
 {
     if(n==1)
         cout<<1<<endl;
     else if(n==2)
         cout<<"1 1"<<endl;
     else
     {
        int *ary=NULL,*t;
        app(t=ary,n);
        t[0]=1;t[1]=1;
        for(int i=2;i<n;i++)//找斐波那契数列的前n项
        {
           t[i]=t[i-1]+t[i-2];
        }
        cout<<t[0];//以要求格式输出
        for(int i=1;i<n;i++)
            cout<<" "<<t[i];
        cout<<endl;
     }
 }
}
