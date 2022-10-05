#include<iostream>
#include<iomanip>
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

    while(cin>>n)
    {
        if(n>=4095)
            cout<<fixed<<setprecision(5)<<a[4095]<<endl;
            //printf("%.5f\n",a[4095]);
        else
            cout<<fixed<<setprecision(5)<<a[n]<<endl;
            //printf("%.5f\n",a[n]);
    }
    return 0;
}
