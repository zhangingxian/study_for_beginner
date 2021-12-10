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
    double x;double y;
};
int main()
{
   int a,b,r,n;
   while(cin>>a>>b>>r>>n)
   {
       point *p=new point[n];
       for(int i=0;i<n;i++)
       {
           cin>>p[i].x>>p[i].y;
       }
       int ans=0;
       for(int i=0;i<n;i++)
       {
           if((a-p[i].x)*(a-p[i].x)+(b-p[i].y)*(b-p[i].y)-r*r<=1e-6)
               ans++;
       }
       cout<<fixed<<setprecision(6)<<1.0*ans/n<<endl;
   }
}
