//
// Created by  yuan on 2021/11/14.
//
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int m, i, count;
    int temp;
    cout << "1" << "/" << "40,";
    for (i = 2; i < 40; i++)
    {
        count = i;
        m = 40;
        temp = m % count;
        while (temp != 0) {
            m = count;
            count = temp;
            temp = m % count;
        }
        if (count == 1)
            cout << i << "/" << "40,";
    }
    return 0;

}