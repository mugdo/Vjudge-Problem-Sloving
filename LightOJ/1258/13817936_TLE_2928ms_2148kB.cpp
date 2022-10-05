#include<bits/stdc++.h>
using namespace std;
int ar[1000];
 string ns;
 int ans=0;

int b=0;
int ckpalindorm(string s)
{
    int len=0;

    len=s.size();
    string s1;
    s1=s;
    reverse(s.begin(),s.end());


    //return s[1];

    int pk=0;
    for(int i=0;i<len;i++)
    {
        if(s1[i]!=s[i])
        {
            pk=1;

        }

    }
    if(pk==1)
    {
        return 5;
    }
    else
        return 2;
}
int main()
{
    int t;
    cin>>t;
    for(int test=1;test<=t;test++)
    {
        string s;
        cin>>s;
        int k=0;
        k=ckpalindorm(s);
        int my=0;
    if(k==2)
    {
         cout<<"Case"<<" "<<test<<":"<<" "<<s.size()<<endl;
         my=1;

    }
    else
    {
        int lenth=0;
        lenth=s.size();
        int newlwnth=0;
        int t=0;
        int a;
        string ns;
        int r=0;
        int ck=0;

        for(int i=0;i<lenth;i++)
        {
            for(int j=i+1;j<lenth;j++)
            {
                string s2;
                string gg;
                gg=s.substr(i,j);
                //cout<<"gg="<<gg<<endl;
                int len;
                len=gg.size();
                int jj=0;
                string ss;

                reverse(gg.begin(),gg.end());
               // cout<<"s2="<<gg<<endl;

                ss=s+gg;
                //cout<<"ss="<<ss<<endl;
                t=ss.size();
                string ns;



                a=ckpalindorm(ss);
                if(a==2)
                {
                    if(ck==0)
                    {
                        ans=t;
                        ck=1;

                    }
                    else if(t<=ans)
                    {
                        ans=t;

                    }


            }
        }
    }


    }
    if(my!=1)
    {
        cout<<"Case"<<" "<<test<<":"<<" "<<ans<<endl;
        my=0;

    }





    }


    return 0;
}
