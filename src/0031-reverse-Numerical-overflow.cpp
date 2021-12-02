#include <iostream>
#include<cmath>
using namespace std;
int main()//逆序输出
{
    int x;
    while (cin >> x) {
        int n=abs(x);
        int arr1[50], a = 0;
        for (int i = 0; n != 0; i++)//求每一位
        {
            arr1[i] = n % 10;
            n /= 10;
            a++;
        }
        int b = a - 1;
        long long sum = 0;
        for (int j = 0; j < a; j++) {
            sum += arr1[j] * pow(10.0, b);
            b--;//注意数值a,b
        }
        if(x>=0&&sum>=-2147483648&&sum<=2147483647)
            cout<<sum<<endl;
        if(x<0&&sum>=-2147483648&&sum<=2147483647)
            cout<<"-"<<sum<<endl;
        if(sum<-2147483648||sum>2147483647)
            cout<<0<<endl;

    }
}