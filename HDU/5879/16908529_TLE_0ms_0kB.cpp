#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        float sum=0;

        for(float k=1;k<=n;k++)
        {
            sum+=1/(k*k);
        }

        //cout<<sum<<endl;
        //cout<<fixed<<setprecision(5)<<sum<<endl;
        printf("%.5f\n",sum);
    }
    return 0;
}

