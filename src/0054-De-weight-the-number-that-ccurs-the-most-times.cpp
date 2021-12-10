/*Description
众数指的是出现次数最多的数，给定一个指定长度的整型数组，该数组中有且仅有一个众数x。去除重复的x后（仅保留一个）计算该数组中剩余元素的平均值。

Input
数组长度n；

一个包含众数的数组arr[n]。（1≤n≤10000，0≤ arr[i] ≤10000）

Output
去除众数重复值的数组元素的平均值。（结果保留两位小数）

Sample Input
5
1 2 2 3 5
3
3 3 7
4
9 7 9 2
Sample Output
2.75
5.00
6.00
*/
#include<iostream>
#include<iomanip>
using namespace std;
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
int p(int x[],int m,int n)//记录数组中重复数字的 个数
{int k=0;
    for(int i=m;i<n;i++)
{
        if(x[i]==x[m])k++;
        else break;
}
    return k;
}
int main()
{
int n;int x[10000];
while(cin>>n)
{
    for(int i=0;i<n;i++)//数据输入
        cin>>x[i];
    sort(x,n);//找众数先排序
    int c[10000];int j=0;int y[10000];//分别用数组c记录个数，数组y记录对应的数字
    for(int i=0;i<n;j++)
    {
        c[j]=p(x,i,n);
        y[j]=x[i];
        i+=c[j];
    }

    int sum=0;
    for(int i=0;i<n;i++)
        sum+=x[i];

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
         sum=sum-y[0] *c[0] +y[0] ;
        cout<<fixed<<setprecision(2)<<1.0*sum/(n-c[0]+1)<<endl;//最后求平均数时要注意对应的数字含义
}
}
