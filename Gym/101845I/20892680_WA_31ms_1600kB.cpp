#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        unsigned long long num,k;
        cin>>num>>k;
        int turn;
        if(k>n)
           turn=k%n;
        else
        {
            turn=k;
        }
        int binaryBumber[100000];
        int temp=0;
        while(num>0)
        {
            binaryBumber[temp]=num%2;
            num=num/2;
            temp++;
        }
       int binaryBumber1[100000];
       int p=0;
       for(int v=temp-1;v>=0;v--)
       {
           binaryBumber1[p]=binaryBumber[v];
           p++;
       }

       int extra=0;
       extra=n-temp;
       int binaryBumber2[100000];
       for(int l=0;l<extra;l++)
       {
           binaryBumber2[l]=0;
       }
       int g=0;
        for(int l=extra;l<n;l++)
       {
           binaryBumber2[l]=binaryBumber1[g];
           g++;
       }

       int br[10000];
       for(int c=0;c<turn;c++)
       {
           br[c]=binaryBumber2[c];
       }

       int cr[100000];
       int h=0;
       for(int c=turn;c<n;c++)
       {
           cr[h]=binaryBumber2[c];
           h++;
       }

       int f=0;
       for(int c=n-turn;c<n;c++)
       {
           cr[c]=br[f];
           f++;
       }

       int d=1;
       long long sum=0;
       for(int z=n-1;z>=0;z--)
       {
           sum+=cr[z]*d;
           d*=2;
       }
       cout<<sum<<endl;


    }



    return 0;
}
