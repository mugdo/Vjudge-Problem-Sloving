#include<bits/stdc++.h>
using namespace std;
 int ck=0;
int main()
{

    int n,m;
    cin>>n>>m;
    string ss[m];
    for(int i=0;i<n;i++)
    {
       cin>>ss[i];
    }

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m-1;j++)
       {
          //// cout<<"ss[i][j]="<<ss[i][j]<<" ss[i][j+1]="<<ss[i][j+1]<<endl;
           if(ss[i][j]!=ss[i][j+1])
           {
                 ck=1;

           }


       }






   }





//cout<<"ck="<<ck<<endl;

   for(int i=0;i<n-1;i++)
   {
      // cout<<"ss[i][0]="<<ss[i][0]<<" ss[i+1][0]="<<ss[i+1][0]<<endl;
       if(ss[i][0]==ss[i+1][0])
       {
            ck=1;
       }

   }
   if(ck==0)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }


    return 0;
}
