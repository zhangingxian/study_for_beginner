//
// Created by  yuan on 2021/11/13.
//
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int x[20][20]; x[0][0]=1;
        for(int i =0;i<n;)
        {
            cout<<x[i][0];
            for(int j=1;j<=n-1;j++)
            {
                if(j<i)
                {
                    x[i][j]=i-j+1;
                    cout<<" "<<x[i][j];
                }
                else
                {
                    x[i][j]=1;
                    cout<<" "<<x[i][j];
                }

            }
            cout<<endl;
            i++;
            x[i][0]=x[i-1][0]+1;
        }//输出矩阵
          int sum =0;
        for(int i=0;i<n;i++)
        {
            for(int j =0;j<=i;j++)
            {
                sum+=x[i][j];
            }
        }//求主对角线下元素的和
        cout<<sum-n<<endl;
    }
}
