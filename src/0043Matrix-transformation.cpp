//
// Created by  yuan on 2021/12/2.
//


#include<iostream>
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
    {   int **ary1=NULL,**t,**ary2=NULL,**q;
        app(t=ary1,m,n);app(q=ary2,m,n);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cin>>t[i][j];
        }
        int k;
        cin>>k;//经过k次行或列变换
        while(k--)
        {
            char p;int a=0,b=0;
            cin>>p>>a>>b;
            a--;b--;
           if(p=='r')
           {
                for (int i = 0; i < n; i++)
                    {
                        q[a][i] = t[a][i];
                        t[a][i] = t[b][i];
                        t[b][i] = q[a][i];
                    }
           }
           if(p=='c')
           {
                    for (int i = 0; i < m; i++)
                    {
                        q[i][a] = t[i][a];
                        t[i][a] = t[i][b];
                        t[i][b] = q[i][a];
                    }
           }
        }
        for(int i=0;i<m;i++)//输出最后的结果
        {
            for(int j=0;j<n;j++)
                cout<<t[i][j];
            cout<<endl;
        }
    }
}

