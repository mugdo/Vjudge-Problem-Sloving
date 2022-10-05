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
        int time[100000],numofsubmision[100000];
        for(int j=0;j<n; j++)
        {
            cin>>time[j];
        }
        for(int j=0; j<m; j++)
        {
            cin>>numofsubmision[j];
        }
        int start=-1,sum=0;
        for(int j=0;j<m;j++)
        {
            start+=numofsubmision[j];
             //cout<<"start="<<time[start]<<endl;
              sum+=time[start];
              //cout<<"sum1="<<sum<<endl;
              sum+=(numofsubmision[j]-1)*20;



        }
        cout<<"Case "<<i+1<<": "<<sum<<endl;

    }
}
