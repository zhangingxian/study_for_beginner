//
// Created by  yuan on 2022/3/29.
//
#include<iostream>
using namespace std;

class Integer
{
public:
    int a;
    int operator+(int x);
    int operator-(int x);
    int operator*(int x);
    int operator/(int x);
};

int Integer::operator+(int x)
{
  Integer n;
  return n.a+x;
}

int Integer::operator/(int x)
{
    Integer n;
    return n.a/x;
}
int Integer::operator-(int x) {
    Integer n;
    return n.a-x;
}

int Integer::operator*(int x) {
    Integer n;
    return n.a*x;
}

int main()
{
    char c;
    while(cin>>c)
    {
        int h;
        Integer m;
        cin>>h>>m.a;
        switch(c)
        {
            case '+':cout<<h+m.a;break;
            case '-':cout<<h-m.a;break;
            case '*':cout<<h*m.a;break;
            case '/':cout<<h/m.a;break;
            default:break;
        }
        cout<<endl;
    }
}

