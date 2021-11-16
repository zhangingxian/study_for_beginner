//
// Created by  yuan on 2021/11/14.
//
#include<iostream>
using namespace std;

int main()
{
    char s[100];
    int i=0,t=0;
    char a;
    while((a=cin.get())!='\n')
    {
      s[i]=a;
      t++;i++;
    }
    for(int i=0;i<t;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;
            cout<<s[i];
        }
        else
            cout<<s[i];
    }
    cout<<endl;
}
