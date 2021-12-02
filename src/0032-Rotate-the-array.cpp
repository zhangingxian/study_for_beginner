//
// Created by  yuan on 2021/11/30.
//旋转数组
#include <iostream>
using namespace std;
void app(int *&pa,int n)//开辟一维数组
{
    pa=new int[n];
    for(int i=0;i<n;i++)pa[i]=i;
}
int main()
{
int n;
while(cin>>n)
{
    if(n==0)break;
    int *ary=NULL,*t;
    app(t=ary,n);
    for(int i=0;i<n;i++)cin>>t[i];
    int k;cin>>k;//旋转次数
    for(int i=k;i>0;i--)
    {   int s;    s=t[n-1];
        for(int j=n-2;j>=0;j-- )
        {
          t[j+1] =t[j] ;
        }
        t[0]=s;
    }
    cout<<t[0];
    for(int i=1;i<n;i++)
        cout<<" "<<t[i];
    cout<<endl;

}
}

