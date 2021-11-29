//
// Created by  yuan on 2021/11/28.
//
#include <iostream>
#include<cmath>
using namespace std;
struct point{double x;double y;};
double dist(point a,point b)//计算两点间距离的函数参数为结构参数
{
    double m=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    return m;
}
int main()
{
point a[3];
while(cin>>a[0].x>>a[0].y>>a[1].x>>a[1].y>>a[2].x>>a[2].y)
{
    double k=abs(dist(a[0],a[1])),
    p=abs(dist(a[0],a[2])),
    l=abs(dist(a[2],a[1]));
    if(abs(k-p)<10e-4&&abs(k-l)<10e-4&&abs(p-l)<10e-4&&(k+p)>l&&(k+l)>p&&(p+l)>k)//判断是否为三角形是否为等边三角形
        cout<<1<<endl;
    else
        cout<<0<<endl;
}
}

