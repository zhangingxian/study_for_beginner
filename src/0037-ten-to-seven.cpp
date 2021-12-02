//在oj上提交的时候最好不要带注释，好像会报错
#include<iostream>
#include<cmath>
using namespace std;
void ten_to_seven(int a)//这个是主体，a形参是对应的十进制数
{   int b;
    if(a!=0)
    {
        b = a%7;
        a = a/7;
        ten_to_seven(a);//递归
        cout << b ;//根据栈先进后出的特点
    }
}
int main()
{
    int a;
    while(cin >>a)
    {
        //下面主要就是格式输出的问题了
        if(a>0)
        {
            ten_to_seven(a);
            cout <<endl;
        }
        else if(a<0)
        {
            int b =abs(a);
            cout <<"-";
            ten_to_seven(b);
            cout <<endl;
        }
        else
        {
            cout << "0";
            cout <<endl;
        }
    }
}
