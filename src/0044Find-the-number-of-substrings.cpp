//
// Created by  yuan on 2021/12/2.
//找所有子串
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
    char a[8000];
    while (cin >> a)
    {
        int l = strlen(a);int sum=0;
        for (int i = 0; i < l; i++)
        {
            if (a[i] == 'C')
            {
                for (int j = i; j < l; j++)
                {
                    if (a[j] == 'H')
                    {
                        for (int k = j; k < l; k++)
                        {
                            if (a[k] == 'N')
                            sum++;
                        }
                    }
                }
            }
        }
        cout<<sum<<endl;
    }

}