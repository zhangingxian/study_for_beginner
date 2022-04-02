//. 需要求2个不同的圆柱体的表面积，设计一个面向对象的程序。数据成员包括：radius(半径)，height(高)；还可根据需要定义其它数据成员。要求分别用成员函数实现以下功能：
//(1) 由键盘输入圆柱体的半径、高；
//(2) 计算圆柱体的表面积；
//(3) 输出圆柱体的表面积。
//请编写程序。
//
// Created by  yuan on 2021/12/14.
//
#include<iostream>
using namespace std;
#define PI 3.14159

class circle//说明类
{
    double radius,height;//类的数据成员
public:
    //类的数据函数
    void Set_Radius()//构造函数，输入数据
    {
        cin>>radius>>height;
    }
    double Get_Radius()//返回表面积
    {
        return PI*radius*radius*2+2*PI*radius*height;
    }
};
int main()
{
    circle A,B;//说明对象
    A.Set_Radius();
    B.Set_Radius();
    cout<<A.Get_Radius()<<endl;
    cout<<B.Get_Radius()<<endl;

}
