/*#include <iostream>
using namespace std;
int num(int n)
{
    int x[100];int a=0;
    int t=n;
    for(int i=0;t!=0;i++)
    {
        x[i]=t%10;a++;t/=10;
    }
    int sum=0;
    for(int i=0;i<a;i++)
    {
        sum+=x[i];
    }
    if(sum<10)
        return sum;
    else
        return num(sum);
}
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<num(n)<<endl;
    }
}*/
#include <iostream>

using namespace std;
int main()
{
    int nums;
    while (cin >> nums) {
        cout << 1 + (nums - 1) % 9 << endl;//非负整数求各位数字和规律为1-9的循环
    }
    return 0;}
//xyzk = 1000 * x + 100 * y + 10 * z + k = 999 * x + 99 * y + 9 * z + (x + y + z + k)，括号内即为所求(或下一次迭代)

//如果最后的 (x + y + z + k) = 9 怎么办？—— 要对模9进行优化了，我们想让最后的9模9之后还是等于9，我们可以写成（9-1）%9+1=9