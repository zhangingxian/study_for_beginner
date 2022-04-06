#include<iostream>
using namespace std;

class Student
{
public:
    int score;
    int total;
    int count;

    Student(int a=0,int b=0,int c=0)
    {
        score=a;
        total=b;
        count=c;
    }
    void scoretotalcount(int s)
    {
        for(int i=5;i>0;i--)
        {
            cin>>s;
            total+=s;
            count++;
        }
    }

    int sum()
    {
        return total;
    }

   double average()
    {
        return 1.0*total/count;
    }
};

int main()
{
    Student S;
    int s=0;
    S.scoretotalcount( s );
    cout<<S.sum()<<" "<<S.average()<<endl;
}