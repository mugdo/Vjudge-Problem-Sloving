#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    int n,m;
    cin>>n>>m;
    int big,small;
    int c1=n;
    int c2=m;

    char ar[100000];
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
        //int ck1=0;
        //cout<<big<<endl;
        for(int i=0;i<m+n;i++)
        {
               if(big==n)
               {
                   ar[i]='B';


               }
              else
              {
                   ar[i]='G';
                   ck=1;
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
                     for(int t=1;t<n+m;t++)
                       {

                           ar[t]='G';
                           t++;
                           c2--;
                           if(c2==0)
                           {
                               break;
                           }

                      }

            }

            for(int k=0;k<m+n;k++)
            {
                cout<<ar[k];
            }
            cout<<endl;






    return 0;
}
