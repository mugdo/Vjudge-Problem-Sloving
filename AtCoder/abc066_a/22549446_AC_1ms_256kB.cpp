#include<bits/stdc++.h>
using namespace std;
int main()
{

   int ar[4];
   cin>>ar[0]>>ar[1]>>ar[2];
   sort(ar,ar+3);
   long long sum=0;
   sum=ar[0]+ar[1];
   cout<<sum<<endl;

   return 0;
}
