#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n ;
    while(cin>>n)
    {
        long long sum=0;
        int temp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            sum+=temp;
        }
        long long ck=0;
        ck=sum/4;
        if(ck*4==sum)
        {
            cout<<ck<<endl;
        }
        else
        {
            cout<<ck+1<<endl;
        }
    }


   return 0;
}
