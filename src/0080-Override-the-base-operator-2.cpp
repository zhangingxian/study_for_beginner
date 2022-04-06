//
// Created by  yuan on 2022/3/29.
//
#include<iostream>
using namespace std;

class Vector
{
public:
    int n;
    int *a;

    explicit Vector(int size);
    void operator+(const Vector& v1) const;
    void operator-(const Vector& v2) const;
    int  operator*(const Vector& v3) const;
    ~Vector();
};

Vector::Vector(int size)
{
    Vector::n=size;
    Vector::a=new int[size];
    for(int i=0;i<size;i++)
    {
    a[i]=0;
    }
}

void Vector::operator+(const Vector& v1) const
{
    for(int i=0;i<n;i++)
    {
        v1.a[i]+=a[i];
    }
    cout<<v1.a[0];
    for(int i=1;i<n;i++)
        cout<<" "<<v1.a[i];
    cout<<endl;
}

void Vector::operator-(const Vector& v2) const
{
    for(int i=0;i<n;i++)
    {
       v2.a[i]=a[i]-v2.a[i];
    }
    cout<<v2.a[0];
    for(int i=1;i<n;i++)
        cout<<" "<<v2.a[i];

    cout<<endl;
}

int Vector::operator*(const Vector& v3) const
{
    int ans=0;
    Vector v(n);
    for(int i=0;i<n;i++)
    {
        v.a[i]=a[i]*v3.a[i];
        ans+=v.a[i];
    }
    return ans;
}

Vector::~Vector()
{
delete a;
}

int main()
 {
    char x;
    while(cin>>x)
    {
        int n;
        cin>>n;
        Vector m(n),y(n);
        m.n=y.n=n;
        for(int i=0;i<n;i++)
            cin>>m.a[i];
        for(int i=0;i<n;i++)
            cin>>y.a[i];

        switch (x)
        {
            case '+':
            {
                m+y;
                break;
            }
            case '-':
            {
                m-y;
                break;
            }
            case '*':cout<<m*y<<endl;break;
            default:break;
        }
    }
 }