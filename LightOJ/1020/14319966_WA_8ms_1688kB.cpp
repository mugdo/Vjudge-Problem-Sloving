#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   // printf("%d\n",t);
    for(int i=1;i<=t;i++)
    {
        int n;
        char s[ 10 ];

        scanf("%d", &n);
        scanf("%s",s);

        //printf("%d %s",n,s);

        if(s[0]=='B')
        {
            if(n%3==0)
            {
                cout<<"Case"<<" "<<i<<":"<<" "<<"Alice"<<"\n";
            }
            else
                cout<<"Case"<<" "<<i<<":"<<" "<<"Bob"<<"\n";
        }

        if(s[0]=='A')
        {
            int k=0;
            k=n+2;
            if(k%3==0)
            {
                cout<<"Case"<<" "<<i<<":"<<" "<<"Bob"<<"\n";
            }
            else
            {
                cout<<"Case"<<" "<<i<<":"<<" "<<"Alice"<<"\n";
            }
        }
    }
    return 0;
}
