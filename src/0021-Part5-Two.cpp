//
// Created by  yuan on 2021/11/28.
//
#include <iostream>
using namespace std;
struct student//结构体
{
    char name[20];
    double score;
};
void app(student *&pa,int n)
{
    pa =new student[n];
}
int main() {
    int n;
    while (cin >> n) {
        student *ary = NULL, *t;//结构体数组
        app(t = ary,n);
        for(int i=0;i<n;i++)
        {
            cin>>t[i].name>>t[i].score;
        }
        for(int i=0;i<n;i++)//冒泡排序找最高得分的名字
        {student a;
            for(int j=i+1;j<n;j++)
            {
                if(t[i].score<t[j].score)
                {
                    a=t[i];
                    t[i]=t[j];
                    t[j]=a;
                }
            }
        }
        cout<<t[0].name<<endl;
    }
}