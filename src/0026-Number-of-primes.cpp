#include <iostream>
using namespace std;
 bool num(int n)//判断是不是素数
 {int count =0;
     for(int i=2;i<=n/2;i++)
     {
         if(n%i==0){count++;break;}
     }
     if(count==0)return true;
     else return false;
 }
int main()
{
  int n;
  while(cin>>n)
  {
      int sum=0;
      if(n==1)cout<<0<<endl;
      else if(n==2)cout<<1<<endl;
      else {
      for(int i=2;i<n;i++)
      {
          if(num(i))sum++;//记录素数的个数
      }
      cout<<sum<<endl;}
  }
}
