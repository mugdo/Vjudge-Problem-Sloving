#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n;

    while(cin>>n)
    {
        float sum=0;

        for(float k=1;k<=n;k++)
        {
            sum+=1/(k*k);
        }

        //cout<<sum<<endl;
        cout<<fixed<<setprecision(5)<<sum<<endl;
    }
    return 0;
}

