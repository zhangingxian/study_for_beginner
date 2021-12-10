/*Description
        集装箱运输货物时，我们必须特别小心，不能把不相容的货物装在一只箱子里。比如氧化剂绝对不能跟易燃液体同箱，否则很容易造成爆炸。

本题给定一张不相容物品的清单，需要你检查每一张集装箱货品清单，判断它们是否能装在同一只箱子里。

Input
        输入第一行给出两个正整数：N (≤104) 是成对的不相容物品的对数；M (≤100) 是集装箱货品清单的单数。随后数据分两大块给出。第一块有 N 行，每行给出一对不相容的物品。第二块有 M 行，每行给出一箱货物的清单，格式如下：

K G[1] G[2] ... G[K]

其中 K (≤1000) 是物品件数，G[i] 是物品的编号。简单起见，每件物品用一个 5 位数的编号代表。两个数字之间用空格分隔。

Output
        对每箱货物清单，判断是否可以安全运输。如果没有不相容物品，则在一行中输出 Yes，否则输出 No。

Sample Input
6 3
20001 20002
20003 20004
20005 20006
20003 20001
20005 20004
20004 20006
4 00001 20004 00002 20003
5 98823 20002 20003 20006 10010
3 12345 67890 23333
Sample Output
No
        Yes
Yes
        HINT
多组测试
*/
#include<iostream>
using namespace std;
int main() {
    int N, M;//多组数据输入
    while (cin >> N >> M) {
        int x[100000][2];
        for (int i = 0; i < N; i++)
            for (int j = 0; j < 2; j++)
                cin >> x[i][j];//数据输入

        while (M--) {
            int k;
            cin >> k;
            int *a = NULL;
            a = new int[k];
            for (int i = 0; i < k; i++)
                cin >> a[i];//输入数据
            int flag = 0;//计数器
            for (int i = 0; i < k; i++) {
                for (int j = 0; j < N; j++) {
                    if (a[i] == x[j][0])//两种情况
                    {
                        for (int p = 0; p < k; p++) {
                            if (a[p] == x[j][1]) {
                                flag++;
                                break;
                            }
                        }
                    }
                    if (a[i] == x[j][1]) {
                        for (int p = 0; p < k; p++) {
                            if (a[p] == x[j][0]) {
                                flag++;
                                break;
                            }
                        }
                    }
                }
            }
            if (flag != 0)cout << "No" << endl;//判断结果
            else cout << "Yes" << endl;

        }
    }
}