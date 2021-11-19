//
// Created by  yuan on 2021/11/18.
//
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n<0)
            cout<<"false\n";
        if(n==0)
            cout<<"true\n";
        if(n>0)
        {
            int arr1[50] ,arr2[50],a=0;
            for(int i=0;n!=0;i++)
            {
                arr1[i]=n%10;
                n/=10;
                a++;
            }
            for(int j=a-1;j>=0;j--)
            {
                arr2[j]=arr1[a-j-1];
            }
            int c=0;
            for(int i =0;i<a;i++)
            {
                if(arr1[i]==arr2[i])
                    c++;
            }
            if(c==a)
                cout<<"true\n";
            else
                cout<<"false\n";

        }
    }
}
