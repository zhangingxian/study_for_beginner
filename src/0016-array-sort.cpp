
#include <iostream>
using namespace std;
void app(int *&pa,int n)
{
    pa=new int[n];
    for(int i=0;i<n;i++)
        pa[i]=i;
}
void sort(int x[],int n)//选择排序
{
    int min,t;
    for(int i=0;i<n;i++)
    {
        t=i;
        for(int j =i+1;j<n;j++)//找最小元素
            if(x[j]<x[t])t=j;
        if(t!=i)//交换数组元素
        {
            min=x[i];
            x[i]=x[t];
            x[t]=min;
        }
    }
}
int main() {
    int m, n, *x = NULL, *y = NULL, *t, *p;
    while (cin >> m) {
        app(t = x, m);
        for (int i = 0; i < m; i++) {
            cin >> t[i];
        }
        cin >> n;
        app(p = y, n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        int *c = NULL, a = m + n;
        app(c, a);
        for (int i = 0; i < m; i++) {
            c[i] = t[i];
        }
        for (int i = 0; i < n; i++) {
            c[i + m] = p[i];
        }
        sort(c, a);
        cout << m + n << endl;
        cout << c[0];
        for (int i = 1; i < a; i++)
            cout << " " << c[i];
        cout << endl;
    }
}
