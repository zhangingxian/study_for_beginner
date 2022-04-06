#include<iostream>
#include<string>
using namespace std;

class l
{
public:
    string b;
   string operator+(string a);
};
string l::operator+(string a)
{
    l ans{};
    string c;
    int len1=a.length();
    int len2=ans.b.length();
    for(int i=0;i<len1;i++)
        c[i]=a[i];
    for(int j=len1,i=0;i<len2;j++,i++)
        c[j]=ans.b[i];
    return c;
}

int main()
{
   string x; l y;
   while( cin>>x>>y.b)
   {
       cout<<x+y.b<<endl;
   }
}