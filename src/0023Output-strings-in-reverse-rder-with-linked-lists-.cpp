//
// Created by  yuan on 2021/11/28.
//
#include <iostream>
#include<cstring>//string类函数库
using namespace std;
struct Node//建立单向链表
{
    char x;
    Node * next;
};
int main() {
    char a[1000];
    while (gets(a)) {
        int len = strlen(a);
        Node *head, *s, *p;
        s = new Node;
        s->x = a[len - 1];
        int i = len - 2;
        while (i >= 0) {
            if (head == NULL)
                head = s;
            else
                p->next = s;
            p = s;
            s = new Node;
            s->x = a[i];
            i--;
        }
        p->next = NULL;
        delete s;
        while (head) {
            cout << head->x;
            head = head->next;
        }
        cout << a[0];
        cout << '\n';

    }
}
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
struct nobe
{
    char a;
    nobe*next;
};
int main2()
{
    char a[100];
    while(cin>>a)
    {
        for(int i=strlen(a)-1;i>=0;i--)//反序输出字符串
        {
            cout<<a[i];
        }
        cout<<endl;
    }
}

