#include<bits/stdc++.h>
using namespace std;
#define lld long long int
int main()
{
      int t,n;
     scanf("%d",&t);
    lld a[100005];
    lld b[100005];
    while(t--)
    {

        scanf("%d",&n);



        map<int ,int>mp;
        lld flag=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            cin>>b[i];
            

            mp[a[i]]++;
            //cout<<mp[a[i]]<<endl;

        }

        for(int i=1;i<=n;i++)
        {
            flag+=mp[b[i]];
        }

        printf("%lld\n",flag);
    }

    return 0;
}
