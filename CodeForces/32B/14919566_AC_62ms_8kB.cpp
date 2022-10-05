#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
                if(s[i]=='.')
                    cout<<"0";
                   else if(s[i]=='-'&&s[i+1]=='.')
                 {

                    cout<<"1";
                    i++;
                   // i++;
                }



            else if(s[i]=='-'&&s[i+1]=='-')
            {
                cout<<"2";
                i++;
            }

    }


    cout<<endl;
    return 0;

}
