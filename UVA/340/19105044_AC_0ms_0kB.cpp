#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=1;

    while(cin>>n)
    {
        if(n==0)
            break;

        int s[n],g[n],counter1[10];

        memset(counter1,0,sizeof(counter1));

        for(int i=0;i<n;i++)
        {
            cin>>s[i];

            counter1[s[i]]++;
        }
        cout<<"Game "<<t<<":"<<endl;
        while(1)
        {
            int strong=0,weak=0,valid[1010],cnt=0,counter[10];
            memset(valid,-1,sizeof(valid));

            for(int i=0;i<10;i++)
            {
               counter[i]=counter1[i];
            }

            for(int i=0;i<n;i++)
            {
                cin>>g[i];

                if(g[i]==0)
                    cnt++;
            }
            if(cnt==n)
                break;
            else
            {
                for(int i=0;i<n;i++)
                {
                    if(g[i]==s[i])
                    {
                        strong++;
                        counter[g[i]]--;
                        valid[i]=1;
                    }
                }
                for(int i=0;i<n;i++)
                {
                    if(valid[i]!=1)
                    {
                        if(counter[g[i]]>=1)
                        {
                            weak++;
                            counter[g[i]]--;
                        }
                    }
                }
            }
            cout<<"    ("<<strong<<","<<weak<<")"<<endl;
        }
        t++;
    }

    return 0;
}
