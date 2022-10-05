#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    float a[10010];
    //memset(a,0,sizeof(a));

    float sum=0,k=1;

    for(int i=1;i<10010-1;i++)
    {
        sum+=1/(k*k);
        a[i]=sum;
        //cout<<a[i]<<endl;
        k++;
        //cout<<k<<endl;
    }

    int n;

    while(scanf("%d",&n)!=EOF)
    {
        if(n>=10000)
            printf("%.5f\n",a[10000]);
        else
            printf("%.5f\n",a[n]);
    }
    return 0;
}

