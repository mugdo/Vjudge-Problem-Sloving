#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];

    }
    int ss=0;
    int ck=0;
    int flag1=0;
    int flag2=0;
    //int flag3=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==25)
        {
            flag1+=1;
        }
        if(ar[i]==50)
        {
            flag2+=1;
            flag1--;
            if(flag1<0)
            {
                cout<<"NO"<<endl;
                ck=1;
                break;
            }
        }
        if(ar[i]==100)
        {
            if(flag2>=1&&flag1>=1)
            {
                flag2--;
                flag1--;

            }
            else
            {
                flag1=flag1-3;
                if(flag1<0)
                {
                    cout<<"NO"<<endl;
                    ck=1;
                    break;

                }

            }
        }
        if(flag1<0||flag2<0)
        {
            cout<<"NO"<<endl;
        }

    }
    if(ck==0)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
