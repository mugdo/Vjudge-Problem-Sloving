#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int T=0;T<t;T++)
    {
        int n;
        cin>>n;
        int pk=0;
        pk=n;
        string s;
        int flag=0;
        int ck=0;
        while(1)
        {
            for(int i=9;i>=2;i--)
            {
                //cout<<"first n="<<n<<"  i="<<i<<endl;
                if(n%i==0)
                {
                  //cout<<"i="<<i<<endl;
                   s+=i+'0';
                   n=n/i;
                   //cout<<"n="<<n<<endl;
                   ck=1;
                   break;
                }
            }
            if(ck==0||n==0)
            {
                break;
            }
            ck=0;
        }
        //cout<<"n=="<<n<<endl;
        if(pk==1)
        {
           cout<<1;
        }
        else if(n<=1)
        {
            for(int i=s.size()-1;i>=0;i--)
            {
                cout<<s[i];
            }
        }
        else
        {
            cout<<"-1";
        }
        cout<<endl;

    }

    return 0;
}
