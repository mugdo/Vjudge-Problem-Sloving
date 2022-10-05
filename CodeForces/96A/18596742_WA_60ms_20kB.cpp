#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int si=s.size();
    //cout<<"si="<<si<<endl;
    int ck=0;
    for(int i=0;i<si;i++)
    {
        //cout<<"i="<<i<<endl;
        //if(s[i]=='0')
        {
            int flag=0;
            for(int j=i;j<si-1;j++)
            {
                //cout<<"s[j]="<<s[j]<<"  s[j+1]="<<s[j+1]<<endl;
                if(s[j]==s[j+1])
                    flag++;
                    else
                        break;

            }
            //cout<<"flag="<<flag<<endl;
            if(flag==7)
            {
                ck=1;
                break;
            }
        }
    }
    if(ck==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
