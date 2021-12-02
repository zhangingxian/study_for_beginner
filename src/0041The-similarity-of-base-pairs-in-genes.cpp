//
// Created by  yuan on 2021/12/2.
//
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
 double x;
 char a[500],b[500];
 while(cin>>x>>a>>b)
 {
     int len=strlen(a);
     int sum=0;
     for(int i=0;i<len;i++)
     {
         if(a[i]==b[i])sum++;
     }
     double ans=1.0*sum/len;
     if(ans>=x)cout<<"yes"<<endl;
     else cout<<"no\n";
 }
}

