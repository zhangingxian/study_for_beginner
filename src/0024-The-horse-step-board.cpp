#include <iostream>
#include <string.h>
using namespace std;

int step[501][501];
int visited[501][501];
int startx,starty,endx,endy,m,n;
struct Node
{
    int x;
    int y;
} que[250001];

void sousuo()
{
    int direct[8][2]={{1,2},{2,1},{-1,-2},{-2,-1},{-1,2},{2,-1},{1,-2},{-2,1}};
    int front=-1,rear=-1,curx,cury,tempx,tempy,i;
    que[++rear].x=startx;
    que[rear].y=starty;
    step[startx][starty]=0;
    visited[startx][starty]=1;
    while(front!=rear)
    {
        curx=que[++front].x;
        cury=que[front].y;
        if((curx==endx)&&(cury==endy))
            break;
        for(i=0;i<8;i++)
        {
            tempx=curx+direct[i][0];
            tempy=cury+direct[i][1];
            if(tempx>0&&tempx<=m&&tempy>0&&tempy<=n&&visited[tempx][tempy]==0)
            {
                step[tempx][tempy]=step[curx][cury]+1;
                visited[tempx][tempy]=1;
                que[++rear].x=tempx;
                que[rear].y=tempy;
            }
        }
    }
}



int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        memset(step,0,sizeof(step));
        memset(visited,0,sizeof(visited));
        cin>>m>>n;
        cin>>startx>>starty>>endx>>endy;
        sousuo();
        cout<<step[endx][endy]<<endl;
    }
    return 0;
}