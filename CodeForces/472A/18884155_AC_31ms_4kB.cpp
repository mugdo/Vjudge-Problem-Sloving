#include<bits/stdc++.h>
using namespace std;
int p,q;
int prime(int n)
{
    int flag=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
           flag=0;
           //cout<<"flag="<<flag<<endl;
        }
    }
    if(flag==0)
    {
        return 2;
    }
    else
        return 1;
}
int main()
{
    int n;
    cin>>n;
    p=n-4;
    //cout<<"for 4="<<prime(4)<<endl;
    q=4;
    for(int i=p;i>=0;i--)
    {
        int x=prime(i);
        //cout<<"x="<<x<<" p="<<i<<" q="<<q<<endl;
       if(x==1)
       {
           q++;
           //cout<<"q="<<q<<endl;
       }
       else
       {

           int y=prime(q);
           //cout<<"y="<<y<<" p="<<i<<"  q="<<q<<endl;
           if(y==2)
           {
               cout<<i<<" "<<q<<endl;
               break;
           }
           else
           {
               q++;
           }

       }
    }




    return 0;
}
