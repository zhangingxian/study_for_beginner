//
// Created by  yuan on 2021/11/20.
//
#include <iostream>
using namespace std;
inline int isnumber(char ch)//内联函数，降低小程序开销，适用于三到五行代码
{
   return (ch>='0'&&ch<='9')?1:0;
}
int main()
{
  char c;int n=0;
  while((c=cin.get())!='\n')//输入一串字符，以回车结束
  {
      if(isnumber(c))n++;//记录字符串中是数字的个数
  }
  cout<<n<<endl;
}