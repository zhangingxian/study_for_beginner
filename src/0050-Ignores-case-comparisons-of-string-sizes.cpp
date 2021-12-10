//
// Created by  yuan on 2021/12/5.
//
#include<iostream>
#include<cstring>
using namespace std;
int MyStrCmp(char *pStr1,char *pStr2)
{   int i,t;
    for (i = 0; pStr1[i]; i++)//将两个字符串中的大写字母全换成小写字母
    {if (pStr1[i] >= 'A' && pStr1[i] <= 'Z')
            pStr1[i] += 32;}
    for (i = 0; pStr2[i]; i++)
    { if (pStr2[i] >= 'A' && pStr2[i] <= 'Z')
            pStr2[i] += 32;}
        t=strcmp(pStr1,pStr2);//cstring头文件中，比较两个字符串的大小
        if(t==0)return 0;
        else if(t<0)return -1;
        else return 1;
}
int main()
{
   char a[20],b[20];
   while(cin>>a>>b)
   { int c=MyStrCmp(a,b);
       if(c==0)cout<<"="<<endl;
       if(c==1)cout<<">"<<endl;
       if(c==-1)cout<<"<"<<endl;
   }
}

