
#include<iostream>
#include<cmath>
using namespace std;
//暴力枚举
//考虑两个数
bool judge(double num1,double num2)
{
    return
    abs(num1+num2-24)<0.01||
    abs(num1-num2-24)<0.01||
    abs(num2-num1-24)<0.01||
    abs(num1*num2-24)<0.01||
    abs(num1/num2-24)<0.01||
    abs(num2/num1-24)<0.01;
}
//考虑三个数
bool judge(double num1,double num2,double num3)
{
    return
            judge(num1+num2,num3)||
            judge(num1-num2,num3)||
            judge(num2-num1,num3)||
            judge(num1*num2,num3)||
            judge(num1/num2,num3)||
            judge(num2/num1,num3)||

            judge(num1+num3,num2)||
            judge(num1-num3,num2)||
            judge(num3-num1,num2)||
            judge(num1*num3,num2)||
            judge(num1/num3,num2)||
            judge(num3/num1,num2)||

            judge(num2+num3,num1)||
            judge(num2-num3,num1)||
            judge(num3-num2,num1)||
            judge(num2*num3,num1)||
            judge(num2/num3,num1)||
            judge(num3/num2,num1);
}
//考虑四个数
bool judge(double num1,double num2,double num3,double num4)
{
    return
            judge(num1+num2,num3,num4)||
            judge(num1-num2,num3,num4)||
            judge(num2-num1,num3,num4)||
            judge(num1*num2,num3,num4)||
            judge(num1/num2,num3,num4)||
            judge(num2/num1,num3,num4)||

                    judge(num1+num3,num2,num4)||
                    judge(num1-num3,num2,num4)||
                    judge(num3-num1,num2,num4)||
                    judge(num1*num3,num2,num4)||
                    judge(num3/num1,num2,num4)||
                    judge(num1/num3,num2,num4)||

                    judge(num1/num4,num2,num3)||
                    judge(num1+num4,num2,num3)||
                    judge(num1-num4,num2,num3)||
                    judge(num4-num1,num2,num3)||
                    judge(num1*num4,num2,num3)||
                    judge(num4/num1,num2,num3)||

                    judge(num2+num3,num1,num4)||
                    judge(num2-num3,num1,num4)||
                    judge(num3-num2,num1,num4)||
                    judge(num2*num3,num1,num4)||
                    judge(num2/num3,num1,num4)||
                    judge(num3/num2,num1,num4)||

                    judge(num2+num4,num1,num3)||
                    judge(num2-num4,num1,num3)||
                    judge(num4-num2,num1,num3)||
                    judge(num2*num4,num1,num3)||
                    judge(num2/num4,num1,num3)||
                    judge(num4/num2,num1,num3)||

                    judge(num3+num4,num1,num2)||
                    judge(num3-num4,num1,num2)||
                    judge(num4-num3,num1,num2)||
                    judge(num3*num4,num1,num2)||
                    judge(num3/num4,num1,num2)||
                    judge(num4/num3,num1,num2);
}
int main()
{
    int num1(0);
    int num2(0);
    int num3(0);
    int num4(0);
  while(cin>>num1>>num2>>num3>>num4)
  {
      bool flag=judge(num1,num2,num3,num4);
      if(flag==1)
          cout<<"YES"<<endl;
      else
          cout<<"NOT\n";
  }
  return 0;
}
