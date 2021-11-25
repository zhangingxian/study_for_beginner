//
// Created by  yuan on 2021/11/25.
//
#include <iostream>
using namespace std;
void yhtriangle(int *const ,int);
int main()
{
int n,*yh;
do//保证输入合法数据
{
    cin>>n;
}while(n<0||n>20);
yh =new int[n+1];//创建动态数组
yhtriangle(yh,n);//调用函数，输出n次幂的系数表
delete []yh;//释放
yh =NULL;
}
void yhtriangle(int * const py,int pn)
{
    int i,j,k;
    py[0]=1;//对第一项赋值
    cout<<py[0]<<endl;//输出0次幂系数
    for(i=1;i<pn+1;i++)
    {
        py[i]=1;//每行的最后一项赋1
        for(j=i-1;j>0;j--)//迭代计算当前行各项值
        {
            py[j]=py[j-1]+py[j];
        }
        for(k=0;k<=i;k++)//输出第i次幂系数
        {
            cout<<py[k]<<" ";
        }
        cout<<endl;
    }
}