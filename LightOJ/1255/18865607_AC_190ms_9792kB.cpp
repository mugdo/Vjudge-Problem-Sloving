#include<bits/stdc++.h>
using namespace std;
int con;
int main()
{
    int t;
    cin>>t;
    for(int T=1;T<=t;T++)
    {
        int temp=0;
        string t,p;
        cin>>t>>p;
        int st,sp;
        st=t.size();
        sp=p.size();
        int ind[sp];
        memset(ind,0,sizeof(ind));
        ind[0]=0;

        for(int i=0,j=1;j<sp;j++)
        {
            if(p[i]==p[j])
            {
                ind[j]=i+1;
                i++;
            }
            else
            {
                 if(i>0)
                   {
                     j--;
                   }
                 if(i>0)
                  {

                    i=ind[i-1];
                 }
            }

        }

        for(int i=0,j=0;j<st;j++)
        {
            if(p[i]==t[j])
            {
                i++;
                con++;
            }
            else
            {
                if(i>0)
                {
                    j--;
                }
                if(i>0)
                {
                    i=ind[i-1];
                }

            }
          if(i==sp)
          {
             temp++;
          }

        }
        cout<<"Case "<<T<<": "<<temp<<endl;
    }
    return 0;
}
