//
// Created by  yuan on 2021/11/25.
#include <iostream>
#include<cstdlib>
//#include<conio>控制台输入输出函数头文件，mac不支持
using namespace std;
int main() {
    int ch;
    puts("Yes or no?");//等同于cout
   cin>>ch;
   cout<<ch;
    puts("\n");
    cout<<cin.fail();
    /*if (toupper(ch) == 'Y')
    {
        puts("Yes.\n");
        exit(1);
    }
    else
    {
        puts("NO.\n");
        exit(0);
    }*/
}

