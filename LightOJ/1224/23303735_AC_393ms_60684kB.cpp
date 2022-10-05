#include<bits/stdc++.h>
using namespace std;
int ar[2500000][4];
int br[2500000];
int level[2500000];
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s;
        memset(br,0,sizeof(br));
        memset(level,0,sizeof(level));
        memset(ar,0,sizeof(ar));
        int flag=0,con,mk=0;
        for(int j=0;j<n;j++)
        {
            cin>>s;


            con=0;
            for(int k=0;k<s.size();k++)
            {
                  if(s[k]=='A')
                  {

                      if(ar[con][0]==0)
                      {

                         ar[con][0]=flag+1;
                         flag++;
                         con=flag;
                         level[con]=k+1;

                          br[con]+=1;

                      }
                      else
                      {
                          con=ar[con][0];
                          br[con]+=1;
                         // mk=max(mk,br[flag]*level[flag]);
                      }


                  }
                  else if(s[k]=='C')
                  {
                      if(ar[con][1]==0)
                      {
                         ar[con][1]=flag+1;
                          flag++;
                          con=flag;
                         level[con]=k+1;


                          br[con]+=1;
                      }
                      else
                      {
                          con=ar[con][1];
                          br[con]+=1;
                         // mk=max(mk,br[flag]*level[flag]);
                      }


                  }
                  else  if(s[k]=='G')
                  {
                      if(ar[con][2]==0)
                      {
                         ar[con][2]=flag+1;
                          flag++;
                         con=flag;
                         level[con]=k+1;
                         // mk=max(mk,br[flag]*level[f


                          br[con]+=1;
                      }
                      else
                      {
                          con=ar[con][2];
                          br[con]+=1;
                         // mk=max(mk,br[flag]*level[flag]);
                      }


                  }
                  else  if(s[k]=='T')
                  {
                      if(ar[con][3]==0)
                      {
                          ar[con][3]=flag+1;
                          flag++;
                          con=flag;
                          level[con]=k+1;



                           br[con]+=1;
                      }
                      else
                      {
                          con=ar[con][3];
                          br[con]+=1;

                      }


                  }

            }

       }
        for(int r=1;r<=flag;r++)
        {

            mk=max(mk,(br[r]*level[r]));
            //cout<<"level="<<level[r]<<"   br="<<br[r]<<endl;
        }
        cout<<"Case "<<i+1<<": "<<mk<<endl;
    }
    return 0;
}
