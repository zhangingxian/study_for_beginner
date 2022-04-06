#include<iostream>
using namespace std;
class Book {
public:

    static void display(const Book& a)
    {
        cout << a.name << " " << a.price << " " << a.number << endl;
    }
    static int borrow(Book a)
    {
        int b = --a.number;
        return b;
    }
    static int restore(Book a)
    {
        int c = ++a.number;
        return c;
    }
    string name; int price{}; int mutable number{};
};
int main()
{
    Book x; string name; int price; int number; string m;
    while (cin >> name >> price >> number)
    {
        x.name = name; x.price = price; x.number = number;
        Book::display(x);
        while(cin>>m)
        {
            if (m == "B") { cout << x.borrow(x) << endl; x.number= x.borrow(x); }
            if (m == "R") { cout << x.restore(x) << endl; x.number = x.restore(x); }
            if (m == "C") { cout << x.number*x.price<< endl; }
        }



    }
}