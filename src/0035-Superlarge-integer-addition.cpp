//
// Created by  yuan on 2021/12/2.
//超大整数加法
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[300],b[300];//通过字符数组实现
    while(cin>>a>>b)
    {char a1[300],b1[300];
        int len1=strlen(a)-1,len2=strlen(b)-1;//先逆序
        for(int i=0;i<=len1;i++)a1[i]=a[len1-i];
        for(int i=0;i<=len2;i++)b1[i]=b[len2-i];
        int c[1000];c[0]=0;int s=0,j=0;
        for(int i=0;i<=len1||i<=len2;i++)//每一位相加
        {
            int n1=i<=len1?(a1[i]-'0'):0;
            int n2=i<=len2?(b1[i]-'0'):0;
            int num=n1+n2+s;
            s=num/10;//是否进位
            c[i]=num%10;j++;//的余数
        }
        if(s>0)//判断最后是否进位
        {
            c[j]=s;j++;
        }
       for(int i=j-1;i>=0;i--)cout<<c[i];//逆序输出
       cout<<endl;
    }
}

