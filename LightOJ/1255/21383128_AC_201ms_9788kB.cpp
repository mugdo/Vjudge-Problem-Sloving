#include<bits/stdc++.h>
using namespace std;
int con;
int main()
{
    int T;
    cin>>T;
    for(int o=1;o<=T;o++)
    {
        string t,p;
        cin>>t;
        cin>>p;
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
        int um=0;
        for(int i=0,j=0;j<st;j++)
        {
            //cout<<"p["<<i<<"]="<<p[i]<<" t["<<j<<"]="<<t[j]<<endl;
            //cout<<"i="<<i<<" j="<<j<<endl;
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
                //cout<<endl;
            }
          if(i==sp)
          {
              //cout<<"Matching Position :"<<j-i+1<<endl;
              um++;

          }

        }
        cout<<"Case "<<o<<": "<<um<<endl;
    }

    return 0;
}
/*
abcxabcdabxabcdabcdabcx
abcdabcx
*/
