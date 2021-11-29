#include <iostream>
#include<cstring>//字符串函数库
#include<cstdio>
using namespace std;
int main()
{
    char a[40], b[40], c[100];
    unsigned long len1, len2;
    //获取字符串

        gets(a), gets(b);
        int n;
        cin >> n;//插入位置的获取，注意可以为0
        len1 = strlen(a);//获取长度
        len2 = strlen(b);
        for (int i = 0; i < n; i++)
            c[i] = a[i];
        for (int i = n, j = 0; i < n + len2; i++, j++)
            c[i] = b[j];
        for (unsigned long i = n + len2, j = n; i < len1 + len2; i++, j++)//把第二个数组复制到c中
            c[i] = a[j];
        for (int i = 0; i < len1 + len2; i++)//输出插入后的新数组
            cout << c[i];
        cout << endl;

    }
