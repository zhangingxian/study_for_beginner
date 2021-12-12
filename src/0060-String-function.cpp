//
// Created by  yuan on 2021/12/12.
//本程序由主函数输入一字符串，调用函数，把该字符串中的数字0～9转换成小写字母a～j；所有小写字母转换成大写字符。然后在主函数输出转换后的字符串。
#include<iostream>
#include<algorithm>
using namespace std;
void change(char *s1,char *s2)
{
  while(*s1)//字符数组的数组名也是第一个字符地址名，解引用，直到'\0'结束
  {
      if(*s1>='0'&&*s1<='9')//判断是否是数字
      {
          *s2=*s1+'a'-'0';//转换成对应的小写字母
      }
      else
          *s2=toupper(*s1);//把小写字符改为大写，函数声明 int toupper(int c)
      s1++;s2++;//后移一位
  }
  *s2='\0';
}
int main()
{
  char str1[20],str2[20];
  cin>>str1;
  change(str1,str2);
  cout<<str2<<'\n';
}

