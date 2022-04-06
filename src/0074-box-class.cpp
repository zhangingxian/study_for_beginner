#include<iostream>
using namespace std;

class Box
{
public:
    double length;
    double width;
    double height;

    Box();
    void setBox(Box a);
    static void volume(Box b);
};

Box::Box()
{
    length=0;
    width=0;
    height=0;
}
void Box::setBox(Box a)
{
   length=a.length;
   width=a.width;
   height=a.height;
}
void Box::volume(Box b)
{
    cout<<b.length*b.width*b.height<<endl;
}
int main()
{
    Box h;
    while(cin>>h.length>>h.width>>h.height)
    {
        h.setBox(h);
        h.volume(h);
    }
}