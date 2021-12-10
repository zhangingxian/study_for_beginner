/*Description
        验证尼科彻斯定理，即：任何一个正整数的立方都可以写成一串连续奇数的和。

Input
        任一正整数

Output
        该数的立方分解为一串连续奇数的和

Sample Input
13
Sample Output
13*13*13=2197=157+159+161+163+165+167+169+171+173+175+177+179+181
HINT
        本题是一个定理，我们先来证明它是成立的。

对于任一正整数a,不论a是奇数还是偶数，整数(a×a-a+1)必然为奇数。

构造一个等差数列，数列的首项为(a×a-a+1),等差数列的差值为2(奇数数列)，则前a项的和为：

a×((a×a-a+1))+2×a(a-1)/2

=a×a×a-a×a+a+a×a-a

=a×a×a

        定理成立。证毕。

通过定理的证明过程可知L所要求的奇数数列的首项为(a×a-a+1)，长度为a。编程的算法不需要特殊设计，可按照定理的证明过直接进行验证。
*/


#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
int n;
while(cin>>n)
{
    int sum=0;int x[100];int j=0;
    for(int i=n*n-n+1;;)
    {
        if(sum==n*n*n)
        {
            break;
        }
        else
        {
            sum+=i;
            x[j]=i;
            i+=2;j++;
        }
    }
    cout<<n<<"*"<<n<<"*"<<n<<"="<<n*n*n<<"="<<x[0];
    for(int i=1;i<j;i++)
        cout<<"+"<<x[i];
    cout<<endl;
}
}

