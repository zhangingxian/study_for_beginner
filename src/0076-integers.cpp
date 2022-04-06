//
// Created by  yuan on 2022/3/24.
//

#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr[100000];
    int sum=0;
    for(int i=0;a!=0;i++)
    {
        arr[i]=a%10;
        cout<<arr[i];
        sum++;
        a/=10;
    }
    cout<<arr[0];
    for(int i=1;i<=sum;i++)
    {
        int flag=0;
        for(int j=i=1;j>=0;j--)
        {
            if(arr[i]==arr[j])
                flag++;
        }
        if(flag==0)
            cout<<arr[i];
    }
}