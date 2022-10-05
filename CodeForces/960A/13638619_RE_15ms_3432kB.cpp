#include<bits/stdc++.h>
using namespace std;
int st1=1;
int st2=1;
int st3=1;
int main()
{
    string s;
    cin>>s;
    int len=0;
    len=s.size();
    int con1=0;
    int con2=0;
    int con3=0;


    for(int i=0;i<len;i++)
    {
        if(s[i]=='a')
        {
            st1=i;
            con1+=1;
        }



    }
    int k=st1+1;
    int b1=0;
    for(int j=0;j<len;j++)
    {
        if(s[j]=='b')
        {
            b1+=1;
        }
    }
    for(int i=st1+1;i<st1+1+b1;i++)
    {
        st2=i;
        if(s[i]=='b')
        {
            con2+=1;
        }
        else
        {
            cout<<"NO"<<endl;
            return 1;


        }
    }

     for(int i=st2+1;i<len;i++)
    {
        st2=i;
        if(s[i]=='c')
        {
            con3+=1;
        }
        else
        {
            cout<<"NO"<<endl;
            return 1;

        }
    }
    if(con1==con3)
    {
        cout<<"YES"<<endl;
    }
    else if(con2==con3)
    {
        cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
    return 0;
}
