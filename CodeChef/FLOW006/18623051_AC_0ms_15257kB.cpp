#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        int sum=0;
        while(n>=1)
        {

          sum+=n%10;
          n=n/10;

        }
        cout<<sum<<endl;


    }
    return 0;
}
