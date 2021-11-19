//
// Created by  yuan on 2021/11/18.
//
//
// Created by  yuan on 2021/11/11.
//

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        int n = (-1+sqrt(1+8*N))/2;
        int x[100][100];
        x[0][0]=1;
        if((-1+sqrt(1+8.0*N))/2==n)
        {
            int k =0;
            for(int i=0;i<n;)
            {
                cout<<x[i][0];
                for(int  j = 1;j<=n-k-1;j++)
                {
                    x[i][j]=x[i][j-1]+j+1+k;
                    cout<<" "<<x[i][j];
                }
                k++;
                cout<<endl;
                i++;
                x[i][0]=x[i-1][0]+i;
            }
        }

else
        {int k =0;
        for(int i=0;i<=n;)
        {
            cout<<x[i][0];
            for(int  j = 1;j<=n-k;j++)
            {
                x[i][j]=x[i][j-1]+j+1+k;
                if(x[i][j]>N)
                    continue;
                cout<<" "<<x[i][j];
            }
            k++;
            cout<<endl;
            i++;
            x[i][0]=x[i-1][0]+i;
        }


    }}

}
