//
// Created by  yuan on 2021/11/18.
//

#include <iostream>
using namespace std;
struct Student
{
    char name[20];
    int score;
};
void input(Student x[],const int n)
{
    for(int i =0;i<n;i++)
    {
        cin>>x[i].name;
        cin>>x[i].score;
    }
}
int Max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;

}
int main()
{
     Student x[10];
     input(x,10);
     int max1;
     max1= Max(x[0].score,x[1].score);
     if(x[0].score>=x[1].score)
         x[0]=x[0];
     else
         x[0]=x[1];
    for(int i=2;i<10;i++)
     {
       if(x[i].score>=max1)
           x[0]=x[i];
       max1=Max(max1,x[i].score);
     }
     cout<<x[0].name<<endl;

}
