//
// Created by  yuan on 2021/12/5.
//

#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
struct point
{
    int x;int y;
};
int main()
{   int n;
    while(cin>>n)
    {int m=0;
        point *p = new point[n];
        for(int i=0;;i++)//记录树中两个节点间有边
        {
            cin>>p[i].x>>p[i].y;
            if(p[i].y==n)
            {
               m=i;   break;
            }
        }
        int g=0;
        if(n==1)cout<<1<<endl;
        else{
        for(int i=m-1;;)
        {
            if(p[i].y==p[m-1].x)break;
            else {i--;g++;}
        }
        cout<<g+1<<endl;
    }
    }
}

