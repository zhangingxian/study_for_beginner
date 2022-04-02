//
// Created by  yuan on 2021/12/15.
//
#include<iostream>
using namespace std;
int main()
{
    int primer_list[40005];
    int n;
   while(cin>>n)
   {
       int m=0;
       for( int i=2;i<=400000;i++)
       {
          bool e=0;
          for(int j=2;j*j<=i;j++)
          {
              if(i%j==0)
              {
                  e=1;break;
              }
          }
          if(e==0)primer_list[++m]=i;
       }
       cout<<primer_list[n]<<endl;
   }
}
