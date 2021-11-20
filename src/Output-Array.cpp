//
// Created by  yuan on 2021/11/19.
//
#include <iostream>
using namespace std;
int main()
{
     int x[10],y[10];
     for(int i =0;i<10;)
     {
         cin>>x[i];
         y[i]=i;
         i++;
     }//输入并记录
    int empty;
     for(int i =0;i<10;i++)
         for(int j =i+1;j<10;j++)
         {
           if(x[i]<x[j])
           {
              empty=x[i] ;
              x[i]=x[j];
              x[j]=empty;//冒泡排序
              empty=y[i];
              y[i]=y[j];
              y[j]=empty;//记录下标
           }
         }
     for(int i=0;i<10;i++)cout<<x[i]<<" "<<y[i]<<"\n";//输出结果，注意制表符和一个空格不等价


}
