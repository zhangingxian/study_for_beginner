#include<stdio.h>
int main()
{
    int b;
    for(b=1;b<4;b++)
    {
        int a[100];
        int i,s;
        int max;
        for(i=0;;i++)//输入并以数字0结尾换行
        {
            scanf("%d",&a[i]);
            if(a[i]==0)
                break;
        }
        max=a[0];
        for(s=1;s<=i;s++)//冒泡找最大值
        {
            if(max<a[s])
                max=a[s];
        }
        printf("%d\n",max);//输出

    }
    return 0;

}



