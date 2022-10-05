#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>m>>n;
    int big,small;
    int c1=n;
    int c2=m;
    char ar[10000];
    if(m>n)
    {
      big=m;
    }
    else
        big=n;


        if(m>n)
    {
      small=n;
    }
    else
        small=m;
        int ck=0;
        int ck1=0;
        for(int i=0;i<m+n-1;i++)
        {
               if(big==m)
               {
                   ar[i]='G';
                   ck=1;

               }
              else
                 ar[i]='B';

        }
        if(ck==1)
        {
            for(int j=1;j<=n;j++)
            {
                //ar[j]='';
                ar[j]='B';
                j++;

            }
        }
            if(ck==0)
            {
                     for(int t=1;t<=m;t++)
                       {
                           //ar[j]="";
                           ar[t]='G';
                           t++;

                      }

            }
            int s=0;
            //s=sizeof(ar);
            //cout<<s<<endl;
            for(int k=0;k<m+n;k++)
            {
                cout<<ar[k];
            }
            cout<<endl;






    return 0;
}
