#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int b=0;
        cin>>b;
        int ar[b];
        for(int k=0;k<b;k++)
        {
            cin>>ar[k];
        }
        int dif=0;
        dif=ar[1]-ar[0];
        int flag=0;
        for(int j=1;j<b-1;j++)
        {
            flag=ar[j+1]-ar[j];
            if(flag>dif)
            {
                dif=flag;
            }
            if(flag==dif)
            {
                dif+=1;
            }
        }
        cout<<"Case "<<i<<": "<<dif<<endl;
    }

    return 0;
}
