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
           cin>>ar[j];
       }
       int flag=0;
       while(1)
       {
        int ck=0;
           for(int j=0;j<n-1;j++)
           {
               if(ar[j]>ar[j+1])
               {
                   ck=1;
                   flag++;
                   int temp=ar[j];
                   ar[j]=ar[j+1];
                   ar[j+1]=temp;
               }
           }
           if(ck==0)
           {
               break;
           }
       }
       cout<<"Optimal train swapping takes "<<flag<<" swaps."<<endl;

   }

    return 0;
}
