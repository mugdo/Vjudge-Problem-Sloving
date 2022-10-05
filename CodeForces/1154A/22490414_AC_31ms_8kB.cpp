#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[100];
   cin>>a[0]>>a[1]>>a[2]>>a[3];

       //cout<<a[0]<<endl;
       sort(a,a+4);
       cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2]<<endl;



   return 0;
}
