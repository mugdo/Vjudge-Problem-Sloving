#include<bits/stdc++.h>
using namespace std;
#define ld long long int
int main()
{
    int t;
  scanf("%d",&t);
  ld a[100005];
 ld b[100005];
    for(int i=0;i<t;i++)
    {
        long long n;
        scanf("%d",&n);



        map<int ,int>mp;
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&a[i],&b[i]);

            mp[a[i]]+=1;
            //cout<<mp[a[i]]<<endl;

        }
        ld flag=0;
        for(int i=0;i<n;i++)
        {
            flag+=mp[b[i]];
        }

        printf("%ld\n",flag);
    }

    return 0;
}
