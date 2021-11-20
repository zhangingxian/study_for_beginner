//
// Created by  yuan on 2021/11/20.
//
#include <iostream>
using namespace std;
int password(const int &key);
int main()
{
if(password(123456))
    cout<<"Welcome!"<<endl;
else
    cout<<"You are wrong!"<<endl;

}
int password(const int &key)//常引用，密码
{
    static int n=0;//静态变量
   int k;
   cin>>k;//输入密码
   n++;//记录输入次数，即函数调用次数
   if(n<3)
   {
       if(k==key)return 1;
       else password(key);//递归，重新输入
   }
   else
      if(k!=key) return 0;
}
