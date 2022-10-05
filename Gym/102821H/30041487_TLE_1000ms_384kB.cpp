#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,m;
        cin>>n>>m;
        int time[n],numofsubmision[m];
        for(int j=0; j<n; j++)
        {
            cin>>time[j];
        }
        for(int j=0; j<m; j++)
        {
            cin>>numofsubmision[j];
        }
        long long start=0,sum=0;
        for(int j=0; j<m; j++)
        {
            if(j==0)
                start+=numofsubmision[j]-1;
            else
                start+=numofsubmision[j];
            sum+=time[start];
            sum+=(numofsubmision[j]-1)*20;

        }
        cout<<"Case "<<i+1<<": "<<sum<<endl;

    }
    return 0;
}
