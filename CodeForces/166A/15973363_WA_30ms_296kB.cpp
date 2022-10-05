#include<bits/stdc++.h>
using namespace std;
struct r{
int a,b;

};
operator <(r x,r y)
{
  if(x.a!=y.a)
  {
      return x.a>y.a;
  }
  else
    return x.b<y.b;
}
int main()
{
    int n,k;
    cin>>n>>k;
    r a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].a;
        cin>>a[i].b;
    }
    sort(a,a+n);
    int con=0;
    //cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[k].a==a[i].a&&a[k].b==a[i].b)
        {
            con++;
        }
    }
    cout<<con<<endl;

    return 0;
}
