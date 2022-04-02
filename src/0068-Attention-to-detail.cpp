//
// Created by  yuan on 2021/12/14.
//

#include <iostream>
using namespace std;
int main1( )
{
    int x=2, y=1;
    while(x<4)
        switch(x++)
        {
            case 3: y++;
            case 1: y+=3;break;//注意
            case 2: y--;
        }
    cout<<y;
}
int x, y;
void fun(int a)
{  int y , b;//注意y
    b=a+2;  x=x+a;  y=x-b;
    cout<<x<<"  "<<y<<"  "<<a<<"  "<<b<<endl;
}
int main2( )
{ int a=1, b=2;
    x=3, y=4;
    fun(b);
    cout<<x<<"  "<<y<<"  "<<a<<"  "<<b<<endl;
    return 0;
}
int main( )
{ int a=12,  b=34, *p, *q, *r;
    p=&a;  q=&b;
    if (*p<*q) { r=p; p=q; q=r; }
    cout<<*p<<"  "<<*q<<endl;
    *q=*p+*q;//注意指针会改变值
    cout<<a<<"  "<<b<<endl;
    return 0;
}
