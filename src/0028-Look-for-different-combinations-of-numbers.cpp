/*Description
        给定一个非负的整数n，计算从0到10n之间有多少个整数是由不同的数字组合成的。例如输入2，统计0<=x<102之间有多少个整数是由不同的数字组合成时，应去掉带有重复数字的整数11、22、33、44、55、66、77、88、99，最后返回结果为91。
Input
        输入包含多个样例。每个样例占一行。
每个样例输入非负整数n。
Output
        每行输出一个样例的结果。每组测试输出均需换行。
Sample Input
1
2
Sample Output
10
91*/

#include <iostream>
using namespace std;
int JieCheng(int n)
{if(n==0)return 1;
    if(n==1)return 9;
    if(n==2)return 9*9;//考虑特殊情况
    if(n>2)
    { int a=1;//要初始化在同一块中
        for(int i=0,j=8;i<n-2;i++,j--)
        {a*=j;}
        return a*81;
    }
}
int main()
{
int n;
while(cin>>n)
{
  int sum=0;
  for(int i=0;i<=n;i++)
      sum+=JieCheng(i);//累加
  cout<<sum<<endl;
}
}

