//
// Created by  yuan on 2021/11/26.
//十进制转二进制，注意格式的输出
#include <iostream>
using namespace std;
int main()
{int n;
    while(cin>>n)
    {
        int x[32],a=0;
        if(n==0)
        {
            cout<<n<<"-->0"<<endl;
        }
        else
        {
            int m=abs(n);
            for(int i=0;m!=0;i++)
            {
                int c=m%2;
                x[i]=c;
                m/=2;
                a++;
            }
            cout<<n<<"-->";
            if(n>0)
            {
                for(int i=0;i<a;i++)
                    cout<<x[a-i-1];
                cout<<endl;
            }
            else
            {
              cout<<"-" ;
                for(int i=0;i<a;i++)
                    cout<<x[a-i-1];
                cout<<endl;
            }
        }
    }
}

