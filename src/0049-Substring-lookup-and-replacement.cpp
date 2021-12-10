#include <iostream>
#include <cstring>
using namespace std;
int ans=0;
void swap(int first,char str[], const char find_str[], const char replace_str[])
{   int len1=strlen(str),len2=strlen(find_str),len3=strlen(replace_str);
    if(len2==len3)
    {
        for(int i=first,j=0;j<len2;i++,j++)
            str[i]=replace_str[j];
    }
    if(len2>len3)
    {
        for(int i=first,j=0;j<len3;i++,j++)
            str[i]=replace_str[j];
    }
    if(len2<len3)
    {
        char *s=new char[len1+len3-len2];
        for(int i=0,j=0;i<first+len3;i++,j++)
        {
            if(i!=first)s[i]=str[i];
            else
            {
                s[i]=replace_str[j];
            }
        }
        for(int i=first+len3,j=first;i<len1+len3-len2;i++,j++)
        {
            s[i]=str[j];
        }
        for(int i=0;i<len3+len1-len2;i++)
            str[i]=s[i];
    }
}
int find(char str[], const char find_str[])
{
    int len1=strlen(str),len2=strlen(find_str);
    int k=0;
    for(int i=0;i<len1;i++)
    {
        if(str[i]==find_str[0])
        {   int num=0;
            for(int j=0;j<len2;j++)
            {
                if(str[i+j]==find_str[j])  num++;
            }
            if(num==len2)
            {
                return i;
            }
        }
        else k++;
    }
    if(k==len1)return len1;
}
int find_replace_str(char str[], const char find_str[], const char replace_str[])
{
    int len1=strlen(str),len2=strlen(find_str);
    int first=0,ans=0;
    while(first+len2<len1)
    {   ans++;
        first=find(str,find_str);
        swap(first,str,find_str,replace_str);
    }
    return ans-1;
}
int main()
{

    char str[100], find_str[20], replace_str[20];

    int replace_cnt = 0;

   // while(cin >> str >> find_str >> replace_str)

    //{
    str[0]='h';str[1]='a';str[2]='x';str[3]='x';str[4]='g';find_str[0]='x';replace_str[0]='p';replace_str[1]='p';
        replace_cnt = find_replace_str(str, find_str, replace_str);

        cout << replace_cnt << endl;

        cout << str << endl;

    //}

    return 0;

}

