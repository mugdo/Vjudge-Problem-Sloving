#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    char ar[n][m];
    int uper ,lowar,left,right;
    int ck=0;
    left=m;
    right=0;
    char temp;
    if(n==1&&m==1)
    {
        cin>>temp;
        cout<<"*"<<endl;
    }
    else
    {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>ar[i][j];
                    if(ck==0&&ar[i][j]=='*')
                    {
                        uper=i;
                        ck=1;
                    }
                    else if(ar[i][j]=='*')
                    {
                        lowar=i;
                    }
                     if(ar[i][j]=='*')
                    {
                        if(j<left)
                        {
                            left=j;
                        }
                        if(right<j)
                        {
                            right=j;
                        }
                    }

                }
            }


            //cout<<"uper="<<uper<<" lower="<<lowar<<" left="<<left<<" right="<<right<<endl;

            for(int i=uper;i<=lowar;i++)
            {
                for(int j=left;j<=right;j++)
                {
                    cout<<ar[i][j];
                }
                cout<<endl;
            }
    }


    return 0;
}
