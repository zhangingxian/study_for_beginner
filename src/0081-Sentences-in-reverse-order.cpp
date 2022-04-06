#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string res="", tmp;
    while (ss>>tmp)      // 从前到后一个单词一个单词流出
    {
        if (res == "")
            res=tmp;
        else
            res=tmp+" "+res;
    }

    cout<<res<<endl;

    return 0;
}
