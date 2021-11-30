/*Description
        假设现在你拥有一只股票一周的价格序列，第i天的股票价格位于序列的第i个位置，现在你只允许做一次交易，也就是说只能先买入再卖出股票。请设计程序找出最佳交易时机使得获利最大化。输出最大的获利结果。
Input
        输入包含多个样例。每个样例占一行。
每个样例输入一周的价格序列。
Output
        每行输出一个样例的结果，即最大的获利值。每组测试输出均需换行。
Hint
        卖出的时间要晚于买入的时间
Sample Input
7 1 3 5 6 4 1
3 5 6 8 12 9 2
22 4 6 7 7 4 1
2 3 5 7 8 1 1
Sample Output
5
9
3
6*/

#include <iostream>
using namespace std;
int main()
{
     int x[7];
     while(cin>>x[0]>>x[1]>>x[2]>>x[3]>>x[4]>>x[5]>>x[6])
     {
         int Max=x[1]-x[0];
         for(int i=1;i<7;i++)
         {
             for(int j=i-1;j>=0;j--)
                 Max=max(Max,x[i]-x[j]);//找最大利润
         }
         cout<<Max<<endl;

     }
}

