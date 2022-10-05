#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;

        int ar[n];
        for(int j=0;j<n;j++)
        {
            //ar[j]=0;
            cin>>ar[j];
            //cout<<ar[j];

        }
        cout<<endl;
        //cout<<ar[0]<<endl;
        int mx=0;
        int ck=0;
        int dif=0;
        for(int k=0;k<n-1;k++)
        {
            dif=0;


            dif=ar[k+1]-ar[k];
            //cout<<"dif="<<dif<<endl;
            if(dif>=mx)
            {
                mx=0;
                mx=dif;
            }


        }
        //cout<<"max="<<mx<<endl;
        int mx1=mx;
        for(int c=0;c<n-1;c++)
        {
            int a=0;
            a=ar[c+1]-ar[c];
            //cout<<"a="<<a<<endl;
            //cout<<"mx1="<<mx1<<endl;
            if(a==mx1)
            {
                mx1=mx1-1;

            }
            else if(a<mx1)
            {
                mx1=mx1;
            }
            else if(a>mx1)
            {
                //mx1+=1;
                mx++;
            }
        }
        cout<<"Case "<<i+1<<":"<<" "<<mx<<endl;

    }
    return 0;
}
