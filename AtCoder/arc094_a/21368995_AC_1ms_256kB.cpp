#include<bits/stdc++.h>
using namespace std;
int sum=0;
int dp(int a,int b,int c)
{
    if(a==b&&b==c)
    {
        return 1;
    }
    else if(a==(b-2)&&c==(b-1))
    {
        sum++;
        dp(a+2,b,c);

    }
    else if(a==(c-2)&&b==(c-1))
    {
        sum++;
        dp(a+2,b,c);

    }
    else if(b==(a-2)&&c==(a-1))
    {
        sum++;
        dp(a,b+2,c);

    }
    else if(b==(c-2)&&a==(c-1))
    {
        sum++;
        dp(a,b+2,c);

    }
    else if(c==(a-2)&&b==(a-1))
    {
        sum++;
        dp(a,b,c+2);

    }
    else if(c==(b-2)&&a==(b-1))
    {
        sum++;
        dp(a,b,c+2);

    }

    else if(b<a&&c<a)
    {
        sum++;
        dp(a,b+1,c+1);

    }
    else if(a<b&&c<b)
    {
        sum++;
        dp(a+1,b,c+1);
    }
    else if(a<c&&b<c)
    {
        sum++;
        dp(a+1,b+1,c);

    }
    else if(a<b&&b==c)
    {
        sum++;
        dp(a+2,b,c);

    }
    else if(a<c&&b==c)
    {
        sum++;
        dp(a+2,b,c);

    }
    else if(b<a&&a==c)
    {
        sum++;
        dp(a,b+2,c);

    }
    else if(b<c&&a==c)
    {
        sum++;
        dp(a,b+2,c);

    }
    else if(c<a&&a==b)
    {
        sum++;
        dp(a,b,c+2);

    }
    else if(c<b&&a==b)
    {
        sum++;
        dp(a,b,c+2);

    }
    return sum;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==0&&b==0&&c==0)
    {
        cout<<"0"<<endl;
    }
    else if(a==b&&b==c)
    {
        cout<<"0"<<endl;
    }
    else
    cout<<dp(a,b,c)<<endl;

    return 0;
}