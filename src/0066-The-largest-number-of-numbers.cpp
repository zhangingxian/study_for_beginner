//
// Created by  yuan on 2021/12/14.
//
#include<iostream>
using namespace std;
void sort(int a[],int n)
{
    int t;
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
}
int p(int x[],int m,int n)//记录数组中重复数字的 个数
{
    int k=0;
    for(int i=m;i<n;i++)
    {
        if(x[i]==x[m])k++;
        else break;
    }
    return k;
}
int mode(int a[],int n)
{
    int c[10000];int j=0;int y[10000];//分别用数组c记录个数，数组y记录对应的数字
    for(int i=0;i<n;j++)
    {
        c[j]=p(a,i,n);
        y[j]=a[i];
        i+=c[j];
    }
    int empty;//找众数，并对应交换数字和个数
    for(int i =0;i<j;i++)
        for(int p =i+1;p<j;p++)
        {
            if(c[i]<c[p])
            {
                empty=c[i] ;
                c[i]=c[p];
                c[p]=empty;//冒泡排序
                empty=y[i];
                y[i]=y[p];
                y[p]=empty;//记录对应的数字
            }
        }
    return y[0];
}
int main()
{
   int *a=NULL;
   int n;
   cin>>n;
   a=new int[n];
   for(int i=0;i<n;i++)
       cin>>a[i];
   cout<<mode(a,n);
}
