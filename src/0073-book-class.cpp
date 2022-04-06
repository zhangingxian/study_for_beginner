
#include<iostream>
using namespace std;

class Book
{
public:
    double price;
    int number;
    string bookname;

    void display(const string& a,double b,int c );
   int borrow(int d);
    int restore(int e);
};

void Book::display(const string& a,double b,int c)
{
    price =b;
    number=c;
    bookname=a;
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int Book::borrow(int d)
{
  number=d;
  number--;
  return number;
}
int  Book::restore(int e)
{
    number=e;
    number++;
    return number;
}

int main() {
    Book book{};
    while (cin >> book.bookname >> book.price >> book.number) {
        book.display(book.bookname, book.price, book.number);

        char x;
        while (cin >> x) {
            if (x == 'B')
               cout<< book.borrow(book.number)<<endl;
            if (x == 'R')
                cout<< book.restore(book.number)<<endl;
            if (x == 'C')
                 cout<<book.number* book.price<<endl;
        }


    }
}