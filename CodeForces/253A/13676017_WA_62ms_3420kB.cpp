#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
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
        //cout<<big<<endl;
        for(int i=0;i<m+n;i++)
        {
               if(big==m)
               {
                   ar[i]='G';
                   ck=1;

               }
              else
              {
                   ar[i]='B';
                   //cout<<"@"<<endl;

              }


        }
        if(ck==1)
        {
            for(int j=1;j<n+m;j++)
            {
                //ar[j]='';
                ar[j]='B';
                j++;
                c1--;
                if(c1==0)
                    break;

            }
        }
            if(ck==0)
            {
                     for(int t=1;t<=m+1;t++)
                       {
                           //ar[j]="";
                           ar[t]='G';
                           t++;
                           c1--;
                           if(c2==0)
                           {
                               break;
                           }

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
