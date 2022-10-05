#include<bits/stdc++.h>
using namespace std;
int br[50000][2];
int level[50000];
string convert(int n)
{
    string s=" ";
    while(n>1)
    {
        if(n%2==0)
        {
           s+='0';
           n=n/2;
        }
        else
        {
            s+='1';
            n=n/2;
        }
    }
    if(n==1)
    {
        s+='1';
    }
    else
        s+='0';
    return s;


}
long long dif(string s)
{
    //cout<<"s.size="<<s.size()<<endl;
    int id=0;
    string ss="";

    if(s[0]=='0')
    {
        if(br[0][1]!=-1)
        {
            id=br[0][1];
            ss+='1';
        }
        else
        {
            id=br[0][0];
            ss+='0';
        }
    }
    else
    {
        if(br[0][0]!=-1)
        {
            id=br[0][1];
            ss+='0';
        }
        else
        {
            id=br[0][0];
            ss+='1';
        }
    }
    //cout<<"id="<<id<<endl;
    for(int i=1;i<s.size();i++)
    {
     // cout<<"s[i]="<<s[i]<<endl;
       if(s[i]=='0')
       {
           if(br[id][1]!=-1)
           {
               id=br[id][1];
               ss+='1';
           }
           else
           {
               id=br[id][0];
               ss+='0';
           }
       }
       else
       {
           if(br[id][0]!=-1)
           {
               id=br[id][0];
               ss+='0';
           }
           else
           {
               id=br[id][1];
               ss+='1';
           }
       }
      // cout<<"ss="<<ss<<endl;
    }
    char fin[40];
    int temp;
    for(int i=0;i<s.size();i++)
    {
        //cout<<"s[i]="<<s[i]-'0'<<"     ss[i]="<<ss[i]<<endl;
        temp=(s[i]-'0')^(ss[i]-'0');
        //cout<<"temp="<<temp+'0'<<endl;
        fin[i]=temp+'0';
        //cout<<"fin="<<fin[i]<<endl;

    }
    //cout<<"fine[0]="<<fin[0]<<endl;
    int con=0;
    long long sum=0,gk=0;
    //cout<<"final="<<fin<<endl;
    for(int i=s.size()-1;i>=0;i--)
    {
        gk=pow(2,con);
        //cout<<"fin[i]="<<fin[i]<<endl;

        sum+=gk*(fin[i]-'0');
        //cout<<"sum111="<<sum<<endl;
        con++;
    }
    cout<<"sum="<<sum<<endl;
    return sum;
}
long long mn(string s)
{
    //cout<<"s.size="<<s.size()<<endl;
    int id=0;
    string ss="";

    if(s[0]=='0')
    {
        if(br[0][0]!=-1)
        {
            id=br[0][0];
            ss+='0';
        }
        else
        {
            id=br[0][1];
            ss+='1';
        }
    }
    else
    {
        if(br[0][1]!=-1)
        {
            id=br[0][1];
            ss+='1';
        }
        else
        {
            id=br[0][0];
            ss+='0';
        }
    }
    //cout<<"id="<<id<<endl;
    for(int i=1;i<s.size();i++)
    {
     // cout<<"s[i]="<<s[i]<<endl;
       if(s[i]=='0')
       {
           if(br[id][0]!=-1)
           {
               id=br[id][1];
               ss+='0';
           }
           else
           {
               id=br[id][1];
               ss+='1';
           }
       }
       else
       {
           if(br[id][1]!=-1)
           {
               id=br[id][1];
               ss+='1';
           }
           else
           {
               id=br[id][0];
               ss+='0';
           }
       }
      // cout<<"ss="<<ss<<endl;
    }
    char fin[40];
    int temp;
    for(int i=0;i<s.size();i++)
    {
        //cout<<"s[i]="<<s[i]-'0'<<"     ss[i]="<<ss[i]<<endl;
        temp=(s[i]-'0')^(ss[i]-'0');
        //cout<<"temp="<<temp+'0'<<endl;
        fin[i]=temp+'0';
        //cout<<"fin="<<fin[i]<<endl;

    }
    //cout<<"fine[0]="<<fin[0]<<endl;
    int con=0;
    long long sum=0,gk=0;
    //cout<<"final="<<fin<<endl;
    for(int i=s.size()-1;i>=0;i--)
    {
        gk=pow(2,con);
        //cout<<"fin[i]="<<fin[i]<<endl;

        sum+=gk*(fin[i]-'0');
        //cout<<"sum111="<<sum<<endl;
        con++;
    }
    cout<<"sum="<<sum<<endl;
    return sum;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<"n="<<n<<endl;
        int ar[n];
        memset(level,0,sizeof(level));
        memset(br,-1,sizeof(br));
        for(int j=0;j<n;j++)
        {
            cin>>ar[j];

        }
        for(int j=1;j<n;j++)
        {
            ar[j]=ar[j-1]^ar[j];
           // cout<<"ar[j]="<<ar[j]<<endl;

        }
        string s[n]="";
        string temp;
        for(int k=0;k<=32;k++)
        {
            temp+='0';
        }
        for(int j=0;j<n;j++)
        {
            string ss=" ";
            ss=convert(ar[j]);
            //cout<<"ss="<<ss<<endl;
            reverse(ss.begin(),ss.end());
            string temp2=" ";
            temp2=temp;
            int pk=0;
            int rk=0;
            rk=32-ss.size();
            rk+=1;
            s[j]=temp2.substr(0,rk)+ss;
            //cout<<s[j]<<endl;

        }
        //cout<<"n="<<n<<endl;
        int flag=0,con=0;
        int cr[50000];
        memset(cr,0,sizeof(cr));
        //cout<<"size="<<s[1].size()<<endl;
        for(int k=0;k<n;k++)
        {
            con=0;
            for(int j=0;j<s[k].size();j++)
            {
                //cout<<"s[k][j]="<<s[k][j]<<endl;
                if(s[k][j]=='0')
                {

                    if(br[con][0]==-1)
                    {
                        br[con][0]=flag+1;
                        //cout<<"br[con][0]="<<br[con][0]<<endl;
                        flag++;
                        con=flag;
                        level[con]+=k+1;
                        cr[con]+=1;
                    }
                    else
                    {
                       cr[con]+=1;
                       con=br[con][0];
                    }
                }
                else
                {
                    if(br[con][1]==-1)
                    {

                        br[con][1]=flag+1;
                        flag++;
                        con=flag;
                        level[con]+=k+1;
                        cr[con]+=1;
                    }
                    else
                    {
                       cr[con]+=1;
                       con=br[con][1];
                    }
                }
            }
        }
        long long mk=0,ck=0,ck2=0;
        long long mi=9999999999999;
        string p="";
        cout<<"ssssssssssssss"<<endl;
        for(int j=0;j<n;j++)
        {
            p="";
            for(int k=0;k<32;k++)
            {
                p+=s[j][k];
            }
            int con=0;
            long long sum=0,gk=0,rk=0;
            //cout<<"final="<<fin<<endl;
            for(int i=p.size()-1;i>=0;i--)
            {
                gk=pow(2,con);
                cout<<"p[i]="<<p[i]<<endl;
                sum+=gk*(p[i]-'0');
                cout<<"sum111="<<sum<<endl;
                con++;
            }
            rk=0;
            cout<<"sum2="<<sum<<endl;
            rk=max(sum,rk);
            //cout<<"s[j]="<<s[j]<<endl;

            cout<<"p11="<<p.size()<<" p="<<p<<endl;
            ck=dif(p);
            ck2=mn(p);
            mi=min(ck2,mi);
            mi=min(mi,sum);

           mk=max(ck,mk);
           mk=max(mk,rk);

           //mk=max(mk,sum);
        }
        cout<<mk<<"   "<<mi<<endl;

    }

    return 0;
}


