//
// Created by  yuan on 2021/12/2.
//卷积的计算
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void app(int ** &pa,int m,int n)
{
    pa = new int*[m];
    if(pa==NULL)
    {
        cout<<"allocation failure";
        return;
    }
    for(int k=0;k<m;k++)
    {
        pa[k]=new int[m];
        for(int i=0;i<n;i++)
        {
            pa[k][i]=0;
        }
    }
}
int main()
{
int m,n;
while(cin>>m>>n)
{
    int ker[3][3]={{1,-1,1},{1,-1,-1},{1,-1,-1}};
   int **ary=NULL,**t,**e,**ary1=NULL;
   app(t=ary,m+4,n+4);
    for(int i=1;i<m+1;i++)//数据输入
        for(int j=1;j<n+1;j++)
            cin>>t[i][j];
    app(e=ary1,m,n) ;//开辟数组来保存最后的结果
    for(int k=1,p=0;k<m+1;k++,p++)
    {
        for (int h = 1,q=0; h<n+1;h++,q++)
        {
            for (int i = k - 1, g = 0; g < 3; i++, g++)
            {
                for (int j = h - 1, w = 0; w < 3; j++, w++)
                {
                    e[p][q] += t[i][j] * ker[g][w];//求每一项
                }
            }
        }
    }
    for(int i=0;i<m;i++)//数据输出
    {
        cout<<e[i][0];
        for(int j=1;j<n;j++)
            cout<<" "<<e[i][j];
        cout<<endl;
    }


}
}

