#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int con=b+c;
    if(con<a)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<con-a<<endl;
    }

}
