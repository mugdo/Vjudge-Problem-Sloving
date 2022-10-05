#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    float a[4100];

    float sum=0,k=1;

    for(int i=1;i<4097;i++)
    {
        sum+=1/(k*k);
        a[i]=sum;
        k++;
    }

    int n;

    while(scanf("%d",&n)!=EOF)
    {
        if(n>=4095)
            printf("%.5f\n",a[4095]);
        else
            printf("%.5f\n",a[n]);
    }
    return 0;
}
