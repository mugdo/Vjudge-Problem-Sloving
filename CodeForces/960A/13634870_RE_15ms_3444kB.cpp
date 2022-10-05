#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=0;
    len=s.size();
    int con1=0;
    int con2=0;
    int con3=0;
    int st1=1;
    int st2=1;
    int st3=1;

    for(int i=0;i<len;i++)
    {
        if(s[i]=='a')
        {
            st1=0;
            con1+=1;
        }
        else if(s[i]=='b')
        {
            st2=0;
            if(st1==0)
            {
                con2+=1;

            }
            else if(st3!=0)
            {
                cout<<"N0"<<endl;
                return 1;
            }

        }
        else if(s[i]=='c')
        {
            st3=i;
            if(st1==0&&st2==0)
            {
                con3+=1;

            }
            else
            {
                cout<<"No"<<endl;
                return 1;
            }

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
      cout<<"No"<<endl;
    }
    return 0;
}
