//
// Created by  yuan on 2021/11/28.
//
#include <iostream>
using namespace std;
int main()
{
    int a,b ,f;char c;//c为填充字符
    while(cin>>a>>b>>c>>f)
    {
        if(f==1)//实心矩形
        {
            for(int j=0;j<a;j++)
            {
                for(int i=0;i<b;i++)
                    cout<<c;
                cout<<endl;
            }
        }
       if(f==0)//空心矩形
        {
            for(int i=0;i<b;i++)
                cout<<c;
            cout<<endl;
            for(int i=0;i<a-2;i++)
            {
                cout<<c;
                for(int j=0;j<b-2;j++)
                    cout<<" ";
                cout<<c;
                cout<<endl;
            }
            for(int i=0;i<b;i++)
                cout<<c;
            cout<<endl;
        }
    }

}

