//
// Created by  yuan on 2021/12/2.
//

#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
int power(int x,int n)//写个函数求乘方
{   long long p=1;
    for(int i=0;i<n;i++)
        p*=x;
    if(p >= -2147483648 && p <= 2147483647)
    return p;
    else
        return 2147483647;
}
int main() {
    int x, n;
    while (cin >> x >> n) {
        long long sum = 0;
        for (int i = n; i >= 0; i--)
            sum += power(x, i);
        if (sum >= -2147483648 && sum <= 2147483647)//考虑数值溢出
            cout << sum << endl;
        else
            cout << "Overflow\n";

    }

}