#include<bits/stdc++.h>
using namespace std;

int a[1000][1000];
struct st
{
    int w,b;
};

int knapsac(int pos,int remain_c,st item[],int n)
{
    if(pos>=n)
        return 0;

    if( a[pos][remain_c] != -1 )
        return a[pos][remain_c];
    else
    {
        int x=0,y=0;

        if(remain_c>=item[pos].w)
            x=item[pos].b+knapsac(pos+1,remain_c-item[pos].w,item,n);

        y=knapsac(pos+1,remain_c,item,n);

        return max(x,y);
    }
}
int main()
{
    int n,t;
    while(cin>>n>>t)
    {
        memset(a,-1,sizeof(a));
        st item[n];

        for(int i=0;i<n;i++)
            cin>>item[i].w>>item[i].b;

        cout<<knapsac(0,t,item,n)<<endl;
    }
    return 0;
}
/*
4 500
100 7
100 7
200 5
200 2

4 300
100 7
100 7
200 5
200 2

4 400
100 7
100 7
200 5
200 2

4 350
100 7
100 7
200 5
200 2
*/
