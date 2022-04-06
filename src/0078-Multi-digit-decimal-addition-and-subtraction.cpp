//
// Created by  yuan on 2022/3/29.
//


#include<iostream>
using namespace std;
struct bigint
{
    int num[100]= {0}; //储存整数部分，默认值为0
    int decimals[100]= {0}; //储存小数部分，默认值为0
    int len=0;//默认缺省总长度为0
    int point=0;//记录小数点后有多少位
    int zheng=0;//记录整数部分有多少位
    string symbol="";//符号位，默认为正数
};
//函数声明
bigint add(bigint n1,bigint n2,string a);//处理加法
bigint sub(bigint n1,bigint n2,string a);//处理减法
bigint str2int(string s);//将输入字符转换成bigint型
int cmp(bigint n1,bigint n2);//比较绝对值，在减法中使用
bigint inputSub(bigint n1,bigint n2);//减法的输入
bigint inputAdd(bigint n1,bigint n2);//加法的输入
void printBigint(bigint n);//答案的输出


//将string转换成int
bigint str2int(string s)
{
    bigint ans;
    int x=-1,y=0;
    int j=0,k=0,action=0,sum=0;
    bool flag=false;
    if(s[0]=='-')
    {
        ans.symbol="-";
        action=1;
    }
    for(int i=s.size()-1; i>=action; i--)
    {
        ans.len++;
        if(s[i]==',')
        {
            ans.len-=1;
            sum++;
            continue;
        }

        if(s[i]=='.') //若此位置是小数点
        {
            ans.point=ans.len-1;//减1是排除小数点位对小数部分长度的影响
            flag=true;//有小数点
            continue;
        }
    }
    if(flag)// 排除小数点对总位数的影响
        ans.len-=1;
    ans.zheng=ans.len-ans.point;
    //将string按规定顺序存入结构体的数组中
    if(ans.symbol=="-")
    {
        x+=1;
        y=1;
    }
    for(int i=ans.zheng+x+sum; i>=action; i--)
    {
        //对于整数来说是倒序存储
        if(s[i]==',')
            continue;
        j++;
        ans.num[j]=s[i]-'0';

    }
    for(int i=ans.zheng+1+y+sum; i<=ans.len+y+sum; i++)
    {
        //对于小数来说是正序存储
        if(s[i]==',')
            continue;
        k++;
        ans.decimals[k]=s[i]-'0';
    }
    return ans;
}

void printBigint(bigint n)
{
    int count=0;
    cout<<n.symbol;
    if(n.zheng%3==0 ||n.zheng==1 ||n.zheng==2)
    {
        for(int i=n.zheng; i>=1; i--)
        {
            cout<<n.num[i];
            count++;
            if(count%3==0 && i!=1)
                cout<<",";
        }

    }
    else if(n.zheng%3==1)
    {
        cout<<n.num[n.zheng];
        cout<<",";
        for(int i=n.zheng-1; i>=1; i--)
        {
            cout<<n.num[i];
            count++;
            if(count%3==0 && i!=1)
                cout<<",";
        }
    }
    else
    {
        cout<<n.num[n.zheng]<<n.num[n.zheng-1];
        cout<<",";
        for(int i=n.zheng-2; i>=1; i--)
        {
            cout<<n.num[i];
            count++;
            if(count%3==0 && i!=1)
                cout<<",";
        }
    }

    if(n.point>0)
    {
        cout<<".";
        for(int i=1; i<=n.point; i++)
        {
            cout<<n.decimals[i];
        }
    }
    cout<<endl;

}
//n1<n2,return -1;n1=n2,return 0;n1>n2,return 1;
//注意，此处比较的是绝对值
int cmp(bigint n1,bigint n2)
{
    if(n1.zheng>n2.zheng)
        return 1;
    else if(n1.zheng<n2.zheng)
        return -1;
    else if(n1.zheng==n2.zheng)
    {
        //从高位开始比，因为整数部分是倒序存储，高位存在后面，所以要从后往前比
        for(int i=n1.zheng; i>=1; i--)
        {
            if(n1.num[i]>n2.num[i])
                return 1;
            else if(n1.num[i]<n2.num[i])
                return -1;
        }
    }

    int n=max(n1.point,n2.point);
    //小数部分是正序存储的
    for(int j=1; j<=n; j++)
    {
        if(n1.decimals[j]>n2.decimals[j])
            return 1;
        else  if(n1.decimals[j]<n2.decimals[j])
            return -1;
    }

    return 0;
}

//减法的输入
bigint inputSub(bigint n1,bigint n2)
{
    if(n1.symbol=="" && n2.symbol=="-")
        return add(n1,n2,"");
    else if(n1.symbol=="-" && n2.symbol=="")
        return add(n1,n2,n1.symbol);
    else if(n1.symbol=="" && n2.symbol=="")
        return sub(n1,n2,n1.symbol);
    else if(n1.symbol=="-" && n2.symbol=="-")
    {
        swap(n1,n2);
        return sub(n1,n2,"");
    }

}

//加法的输入
bigint inputAdd(bigint n1,bigint n2)
{
    if(n1.symbol=="" && n2.symbol=="")
        return add(n1,n2,"");
    else if(n1.symbol=="" && n2.symbol=="-")//有问题
        return sub(n1,n2,"");
    else if(n1.symbol=="-" && n2.symbol=="")
    {
        swap(n1,n2);
        return sub(n1,n2,"");
    }
    else if(n1.symbol=="-" && n2.symbol=="-")
        return add(n1,n2,"-");
}

bigint sub(bigint n1,bigint n2,string symbol)
{
    bigint ans;
    ans.len=max(n1.len,n2.len);
    ans.point=max(n1.point,n2.point);
    ans.zheng=max(n1.zheng,n2.zheng);
    int x=cmp(n1,n2);
    if(x==-1)
    {
        swap(n1,n2);
        ans.symbol="-";
    }

    for(int i=ans.point; i>=1; i--)
    {
        ans.decimals[i]+=n1.decimals[i]-n2.decimals[i];
        //如果对应位置不够减，则向前借1位，此位置加10，前位置减1
        if(ans.decimals[i]<0)
        {
            ans.decimals[i]+=10;
            ans.decimals[i-1]=-1;
        }
    }
    int i=ans.point;
    for(i;i>=1;i--)
        if(ans.decimals[i]==0 && ans.decimals[i-1]==0)
            ans.point--;
        else
            break;
    if(ans.decimals[i]==0)
        ans.point--;
    //当小数部分不够减时，要向整数的个位（即ans.num的第一位）借一
    if(ans.decimals[0]<0)
    {
        //这一步其实没用，因为最后decimals[0]不会输出，[0]只是起到了标志作用，加10已经在上一步加上了
        //ans.decimals[0]+=10;
        ans.num[1]=-1;
    }

    for(int i=1; i<=ans.zheng; i++)
    {
        ans.num[i]+=n1.num[i]-n2.num[i];
        if(ans.num[i]<0)
        {
            ans.num[i]+=10;
            ans.num[i+1]=-1;
        }
    }
    //处理前导零
    while(ans.num[ans.zheng]==0 && ans.zheng>1)
    {
        ans.zheng--;
    }

    return ans;
}


bigint add(bigint n1,bigint n2,string symbol)
{
    bigint ans;
    ans.len=max(n1.len,n2.len);
    ans.point=max(n1.point,n2.point);
    ans.zheng=max(n1.zheng,n2.zheng);
    ans.symbol=symbol;
    for(int i=ans.point; i>=1; i--)
    {
        ans.decimals[i]+=n1.decimals[i]+n2.decimals[i];
        ans.decimals[i-1]=ans.decimals[i]/10;
        ans.decimals[i]=ans.decimals[i]%10;
    }
    int i=ans.point;
    for(i;i>=1;i--)
        if(ans.decimals[i]==0 && ans.decimals[i-1]==0)
            ans.point--;
        else
            break;
    if(ans.decimals[i]==0)
        ans.point--;
    //可知小数部分可能产生整数进位，但最大为1
    //若产生整数进位，则令整数的最低位加1
    if(ans.decimals[0]==1)
        ans.num[1]=1;


    for(int i=1; i<=ans.zheng; i++)
    {
        ans.num[i]+=n1.num[i]+n2.num[i];
        ans.num[i+1]=ans.num[i]/10;
        ans.num[i]=ans.num[i]%10;
    }
    //处理最高位溢出
    if(ans.num[ans.zheng+1]>0)
        ans.zheng++;

    return ans;
}

int main()
{
    int n;
    cin>>n;
    string a,b;
    string symbol;
    bigint A,B;
    while(n>=1)
    {
        cin>>symbol;
        if(symbol=="+")
        {
            cin>>a>>b;
            A=str2int(a);
            B=str2int(b);
            printBigint(inputAdd(A,B));
        }
        else if(symbol=="-")
        {
            cin>>a>>b;
            A=str2int(a);
            B=str2int(b);
            printBigint(inputSub(A,B));
        }
        else
        {
            return 0;
        }
        n--;
    }
    return 0;
}
