#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5010];
    ar[0]=0;
    ar[1]=1;
    int t1=0;
    int t2=1;
    int sum=t1+t2;
    ar[2]=sum;
    for(int i=3;i<5010;i++)
    {
        t1=t2;
        t2=sum;
        sum=t1+t2;
        ar[i]=sum;
    }
    int n;
    while(cin>>n)
    {
        cout<<"The Fibonacci number for "<<n<<" is "<<ar[n]<<endl;

    }
    return 0;
}
