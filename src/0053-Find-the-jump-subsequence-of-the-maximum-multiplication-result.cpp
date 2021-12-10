/*Description
        给定一个由整数组成的序列Sn, (-10<=Si<=10,  i=3,4,...,22), 求其中相乘结果最大的跳跃子序列Xm(子序列长度m=1,...,n)，输出相乘结果，若结果<0, 输出0。所谓跳跃子序列是由每相隔1个位置的子序列所组成的，例如有序列1 2 3 4 5 6， 则2 4 6是一个跳跃子序列，3 5 也是一个跳跃子序列，其中每个元素本身也可单独组成子序列。

Input
        测试序列数N

输入第一个数：序列长度n

        之后的输入为n个整数

Output
        N个结果，每行一个，以换行符结束

        Sample Input
2
3
2 4 -3
5
2 5 -1 2 -1
Sample Output
4
10*/


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int N;cin>>N;//测试案例数
  while(N--)
  {
     int n;cin>>n;long long x[10000];
     for(int i=0;i<n;i++)//测试数据输入
         cin>>x[i];
     long long c[1000]={0};int k=0;
     for(int i=0;i<n-2;i++)//寻找所有的跳跃子序列并记录
     {
         for(int q=i+2;q<n;q+=2)
        {
             long long p = 1;
             for (int j = i; j <=q; j += 2)
             {
                 p *= x[j];
             }
             c[k] = p;
             k++;
        }
     }
     for(int i=k,j=0;i<k+n;i++,j++)//单个数字
         c[i]=x[j];

     long long m=max(c[0],c[1]);//找最大值
     for(int i=2;i<k+n;i++)
         m=max(m,c[i]);
     if(m<0)//最后输出
         cout<<0<<"\n";
     else
         cout<<m<<"\n";
  }
}

