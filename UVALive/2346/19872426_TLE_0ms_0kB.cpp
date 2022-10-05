#include<bits/stdc++.h>
using namespace std;
int jos(int n,int k)
{
   int sum;

   if(n==0)
   {
      return 1;
   }
   else
   {
      return(jos(n-1,k)+k)%n;
   }


   return sum;
}
int main()
{

    int n;
    int ck=1;

    while(cin>>n)
    {
       int sum=0;
       int temp=0;
       ck=1;
      // cout<<"n="<<n<<" sum="<<sum<<endl;
       while(1)
       {
          temp=jos(n,2)+1;
          if(temp!=n)
          {
               n=n-temp;
               sum+=ck*n;
               n=temp;

          }
          else
          {
            ck++;
             sum+=ck*n;
             break;
          }

       }
       cout<<sum<<endl;
       sum=0;


    }



    return 0;
}
