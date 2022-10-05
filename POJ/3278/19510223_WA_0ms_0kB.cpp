#include<iostream>
using namespace std;
int main()
{
  int n;
  int k;
  cin>>n>>k;
  int sum=0;
  sum=k-n;
  //cout<<"sum="<<sum<<endl;
  int d=0;
  d=sum/n;
  //cout<<"d="<<d<<endl;
  int fg=0;
  fg=sum-(n*d);
  fg+=d;
  int fh=0;
  fh=((d+1)*n)-sum;
  fh+=d;
  //cout<<"fg="<<fg<<endl;
  cout<<min(fg,fh)<<endl;
  return 0;
}
