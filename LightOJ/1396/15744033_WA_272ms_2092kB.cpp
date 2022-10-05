#include<bits/stdc++.h>
using namespace std;
int cry=0;
string sum(string s1)
{
    int s=0;

    s=s1.size();
    for(int i=s-1;i>=0;i--)
    {
        int p=0;
        p=s1[i]-'0';
       // cout<<"p="<<p<<endl;
        if(p==9)
        {
            if(cry==1)
            {
                p+=1;
                cry=0;
            }
          //p+=p+1;
          s1[i]='0';
          //cout<<"s1[i]="<<s1[i]<<endl;
          cry=1;
          //break;
        }
        else
        {

            p+=1;
            char d;
            d=p+'0';
            //cout<<"ss p="<<p<<endl;
            s1[i]=d;
           // cout<<"s1[i]="<<s1[i]<<endl;
            break;

        }

    }
    //cout<<s1<<endl;
    return s1;
}
int main()
{
    int t;
    cin>>t;


    for(int i=1;i<=t;i++)
    {
         int f1=0,f2=0,f3=0,f4=0;

        string s;
        cin>>s;
        int siz=0;
        siz=s.size();
        int flag=0;
        if(siz%2==0)
        {
            f1=1;
            string s1=s.substr(0,siz/2);
            string s2=s.substr(siz/2,siz);
            //cout<<s1<<endl;
            //cout<<s2<<endl;
            int r=siz/2;
            //cout<<"r="<<r<<endl;
            for(int j=siz/2-1,k=0;j>=0,k<siz/2;j--,k++)
            {
                //cout<<"s1[j]="<<s1[j]<<" s2[k]="<<s2[k]<<endl;
                if(s1[j]!=s2[k])
                {
                    f3=1;
                    //flag=1;
                    f2=1;
                    if(s1[j]>s2[k])
                    {
                        string ss;
                        int in=0;
                        for(int h=siz/2-1;h>=0;h--)
                        {
                            ss[in]=s1[h];
                            in++;
                        }
                        cout<<"Case "<<i<<": "<<s1;
                        for(int g=0;g<siz/2;g++)
                        {
                            cout<<ss[g];
                        }
                        cout<<endl;
                        break;
                    }
                    else
                    {
                        string s3;
                        s3=sum(s1);
                         string sk;
                        int id=0;
                        for(int m=siz/2-1;m>=0;m--)
                        {
                            //cout<<"s3[m]="<<s3[m]<<endl;
                            sk[id]=s3[m];
                            //cout<<"sk[id]="<<sk[id]<<endl;
                            id++;
                        }
                        //s2[k]=s1[j];
                        //int ind=0;
                        //cout<<sk[0]<<endl;

                        cout<<"Case "<<i<<": "<<s3;
                        for(int g=0;g<siz/2;g++)
                        {
                            cout<<sk[g];
                        }
                        cout<<endl;
                        break;
                    }
                }
            }
            if(f3==0)
            {
                string s6;
                string s7;
                s6=s.substr(0,siz/2);
                s7=sum(s6);
                cout<<"Case "<<i<<": "<<s7;
                for(int p=siz/2-1;p>=0;p--)
                {
                    cout<<s7[p];
                }
                cout<<endl;
            }

        }
        else if(siz%2!=0)
        {
            //f1=0;
           string s1;
           string s2;
           s1=s.substr(0,siz/2);
           s2=s.substr(siz/2+1,siz);
           cout<<s1<<endl;
           cout<<s2<<endl;
           int flag=0;
           for(int j=siz/2-1,k=0;j>=0,k<siz/2;j--,k++)
            {

                //cout<<"s1[j]="<<s1[j]<<" s2[k]="<<s2[k]<<" j="<<j<<" k="<<k<<endl;
                if(s1[j]!=s2[k])
                {
                    f2=1;
                    flag=1;
                    if(s1[j]>s2[k])
                    {
                        string ss;
                        int in=0;
                        for(int h=siz/2-1;h>=0;h--)
                        {
                            ss[in]=s1[h];
                            in++;
                        }
                        cout<<"Case "<<i<<": "<<s1<<s[siz/2+1];
                        for(int g=0;g<siz/2;g++)
                        {
                            cout<<ss[g];
                        }
                        cout<<endl;
                        break;
                    }
                    else
                    {
                        string s3;
                        s3=sum(s1);
                         string sk;
                        int id=0;
                        for(int m=siz/2-1;m>=0;m--)
                        {
                            //cout<<"s3[m]="<<s3[m]<<endl;
                            sk[id]=s3[m];
                            //cout<<"sk[id]="<<sk[id]<<endl;
                            id++;
                        }
                        //s2[k]=s1[j];
                        //int ind=0;
                        //cout<<sk[0]<<endl;

                        //cout<<"Case "<<i<<": "<<s3<<s[siz/2+1];
                        for(int g=0;g<siz/2;g++)
                        {
                            cout<<sk[g];
                        }
                        cout<<endl;
                        break;
                    }
                }
            }
            if(f2==0)
            {
                string s4;
                s4=s.substr(0,(siz/2+1));
                //cout<<"s4="<<s4<<endl;
                string s5=sum(s4);
                cout<<"Case "<<i<<": "<<s5;
                for(int p=siz/2-1;p>=0;p--)
                {
                    cout<<s5[p];
                }
                cout<<endl;

            }

        }
    }

    return 0;
}
