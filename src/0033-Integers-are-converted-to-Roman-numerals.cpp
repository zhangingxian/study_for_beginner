/*Description
        罗马数字可以表示为7种符号：I、V、X、L、C、D、M。 这七种符号所代表的数值为：I->1、V->5、X->10、L->50、C->100、D->500、M->1000。例如，数字2可以表示为II，12可以表示为XII（X+II），27可以表示为XXVII（XX+V+II）。注意，在罗马数字中，4表示为IV，9表示为IX，40表示为XL，90表示为XC，400表示为CD，900表示为CM。输入一个整数，将其转换为一个罗马数字，输入将限制在1到3999之间。

Input
        输入一个整数，范围在1到3999之间。

Output
        输出这个整数所代表的罗马数字。

Sample Input
3
4
9
58
1994
Sample Output
III
        IV
IX
        LVIII
MCMXCIV*/
//注意输出顺序
#include <iostream>
using namespace std;
int main() {
    int n;

    while (cin >> n)
    {   int x[4]={0};
        int t = n;
        int a = 4;
        for (int i = 0; t != 0; i++)//获取每位数字
        {
            x[i] = t % 10;
            t = t / 10;
        }
        for(int i=0;i<x[a-1];i++)//千位
            cout<<"M";
        if(x[a-2]==9)//百位
            cout<<"CM";
        if(x[a-2]>4&&x[a-2]<9)
        {
            cout<<"D";
            for(int i=0;i<x[a-2]-5;i++)
                cout<<"C";
        }
        if(x[a-2]==4)cout<<"CD";
        if(x[a-2]>0&&x[a-2]<4)
        {
            for(int i=0;i<x[a-2];i++)
                cout<<"C";
        }

        if(x[a-3]==9)//十位
            cout<<"XC";
        if(x[a-3]>4&&x[a-3]<9)
        {
            cout<<"L";
            for(int i=0;i<x[a-3]-5;i++)
                cout<<"X";
        }
        if(x[a-3]==4)cout<<"XL";
        if(x[a-3]>0&&x[a-3]<4)
        {
            for(int i=0;i<x[a-3];i++)
                cout<<"X";
        }


        if(x[a-4]==9)//个位
            cout<<"IX";
        if(x[a-4]>4&&x[a-4]<9)
        {
            cout<<"V";
            for(int i=0;i<x[a-4]-5;i++)
                cout<<"I";
        }
        if(x[a-4]==4)cout<<"IV";
        if(x[a-4]>0&&x[a-4]<4)
        {
            for(int i=0;i<x[a-4];i++)
                cout<<"I";
        }

       cout<<endl;
    }
}
