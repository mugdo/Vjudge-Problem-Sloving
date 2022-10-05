#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    double y;
    cin>>x>>y;
    double f=x;
    double balance=0;
    int ck=0;
    if(x%5==0)
    {
        if(f+0.50<=y)
        {
           balance=y-f-0.50;
           ck=1;
        }
    }
    if(ck==1)
    {
        printf("%.2f", balance);
        cout<<endl;
    }
    else
    {
        printf("%.2f", y);
        cout<<endl;
    }

    return 0;
}

