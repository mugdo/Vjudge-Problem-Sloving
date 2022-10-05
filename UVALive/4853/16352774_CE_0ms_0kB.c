#include<bits/stdc++.h>
using namespace std;
int main()
{

   for(int T=1;;T++)
   {

        int n;
        cin>>n;
        if(n==0)
        {
            break;
        }
        //int T=1;
        int ar[n];
        memset(ar,0,n);
        int zero=0;
        int tred=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]==0)
            {
                zero+=1;
            }
            else
            {
                tred+=1;
            }
        }
        cout<<"Case "<<T<<": "<<tred-zero<<endl;
        //T++;

    }
    return 0;
}

