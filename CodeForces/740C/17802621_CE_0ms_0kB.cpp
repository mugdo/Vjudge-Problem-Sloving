#include<bits/stdc++.h>
using namespace std;
int ck[10000];
pair<int,int>p[1000];
pair<int,int> fib(pair<int,int>p[],int n)
{

   if(n==0)
   {
       p[n].first=1;
       p[n].second=0;
       return p[n];
   }
   if(n==1)
   {
       p[n].first=0;
       p[n].second=1;
       return p[n];
   }


   if(p[n].first==-1||p[n].second==-1)
   {
    pair<int,int>t1,t2,temp;
     t1=fib(p,n-1);
     t2=fib(p,n-2);
     t1.first+=t2.first;
     t1.second+=t2.second;
     p[n]=t1;
   }
   else
   {
       return p[n];
   }

}
int main()
{
    int n;
    cin>>n;
    memset(p,-1,sizeof(p));
    fib(p,n);
    cout<<p[n].first<<" "<<p[n].second<<endl;


    return 0;
}
