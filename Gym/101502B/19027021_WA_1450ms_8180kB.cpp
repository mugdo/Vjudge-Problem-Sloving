#include<bits/stdc++.h>
using namespace std;
#define lld long long int
int main()
{
    int t;
  scanf("%d",&t);
  lld a[100005];
 lld b[100005];
    for(int j=0;j<t;j++)
    {
        long long n;
        scanf("%d",&n);



        map<int ,int>mp;
        for(int i=1;i<=n;i++)
        {
            scanf("%d %d",&a[i],&b[i]);

            mp[a[i]]++;
            //cout<<mp[a[i]]<<endl;

        }
        lld flag=0;
        for(int i=1;i<=n;i++)
        {
            flag+=mp[b[i]];
        }

        printf("%ld\n",flag);
    }

    return 0;
}
