#include<bits/stdc++.h>
using namespace std;
int ar[500000][5+1];
int br[10000000];
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s[n];
        for(int j=0;j<n;j++)
        {
            cin>>s[j];
        }

        for(int j=0;j<50000;j++)
        {
            for(int p=0;p<=5;p++)
            {
               ar[j][p]=-1;
            }
        }

        int flag=1,con=0,pk=0,mk;
        for(int j=0;j<n;j++)
        {
            con=0;
            for(int k=0;k<s[j].size();k++)
            {
                 //cout<<"s[j][k]="<<s[j][k]<<endl;
                  if(s[j][k]=='A')
                  {

                      if(ar[con][0]==-1)
                      {
                         ar[con][0]=flag;
                         br[flag]+=1;
                         mk=max(mk,br[flag]*)
                         con=flag;
                         flag++;
                      }
                      else
                      {
                          con=ar[con][0];
                          br[flag]+=1;
                      }


                  }
                  else if(s[j][k]=='C')
                  {
                      if(ar[con][1]==-1)
                      {
                         ar[con][1]=flag;
                         br[flag]+=1;
                         con=flag;
                         flag++;
                      }
                      else
                      {
                          con=ar[con][1];
                          br[flag]+=1;
                      }


                  }
                  else  if(s[j][k]=='G')
                  {
                      if(ar[con][2]==-1)
                      {
                         ar[con][2]=flag;
                         br[flag]+=1;
                         con=flag;
                         flag++;
                      }
                      else
                      {
                          con=ar[con][2];
                          br[flag]+=1;
                      }


                  }
                  else  if(s[j][k]=='T')
                  {
                      if(ar[con][3]==-1)
                      {
                          ar[con][3]=flag;
                          br[flag]+=1;
                          con=flag;
                          flag++;
                      }
                      else
                      {
                          con=ar[con][3];
                          br[flag]+=1;
                      }


                  }

            }

       }
       cout<<"flag="<<flag<<endl;
        for(int r=0;r<flag;r++)
        {
            for(int k=0;k<=5;k++)
                {
                    cout<<ar[r][k]<<" ";

                    //cout<<br[ar[r][k]]<<" ";
                }
            cout<<endl;
        }
    }
    return 0;
}
