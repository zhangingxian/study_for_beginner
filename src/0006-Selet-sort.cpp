//
// Created by  yuan on 2021/11/20.
//
#include <iostream>
#include<ctime>//time函数
#include<cstdlib>//提供rand()随机函数和srand(number)种子函数
void sort(int[],int);
using namespace std;
int main()
{
  int a[10];
  srand(int(time(0)));
  for(int i=0;i<10;i++)
  {
      a[i]=rand()%100;//利用随机数种子对数组初始化
  }
  for(int i =0;i<10;i++)
      cout<<a[i]<<" ";//输出排序前的数组
  cout<<endl;
  sort(a,10);//调用函数
  for(int i=0;i<10;i++)
      cout<<a[i]<<" ";//输出排序后的数组
  cout<<endl;
}
void sort(int x[],int n)//选择排序
{
    int min,t;
    for(int i=0;i<n;i++)
    {
        t=i;
        for(int j =i+1;j<n;j++)//找最小元素
            if(x[j]<x[t])t=j;
        if(t!=i)//交换数组元素
        {
            min=x[i];
            x[i]=x[t];
            x[t]=min;
        }
    }
}