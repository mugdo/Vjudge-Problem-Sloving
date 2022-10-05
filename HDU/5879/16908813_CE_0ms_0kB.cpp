#include<bits/stdc++.h>
using namespace std;

float a[1000010];

int main()
{
    memset(a,0,sizeof(a));

    float sum=0,k=1;

    for(int i=1;i<1000005;i++)
    {
        sum+=1/(k*k);
        a[i]=sum;
        k++;
    }

    int n;

    while(cin>>n)
    {
        cout<<fixed<<setprecision(5)<<a[n]<<endl;
        //printf("%.5f\n",a[n]);
    }
    return 0;
}
