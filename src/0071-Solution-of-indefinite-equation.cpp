//
// Created by  yuan on 2022/2/11.
//
#include<iostream>
using namespace std;

int main()
{
   int a, b, c;
   while(cin>>a>>b>>c)
   {
       int ans=0;
       for(int i=0;a*i<=c;i++)
       {
           for( int j=0;a*i+b*j<=c;j++)
           {
               if(a*i+b*j==c)
               {
                   ans++;
               }
           }
       }
       cout<<ans<<endl;
   }
}


