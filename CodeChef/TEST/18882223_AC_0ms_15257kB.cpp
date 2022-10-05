#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int ck=0;
    while(cin>>n)
    {
        if(n==42)
        {
            ck=1;
        }
        else if(ck!=1)

        {
            cout<<n<<endl;
        }
    }
    return 0;
}
