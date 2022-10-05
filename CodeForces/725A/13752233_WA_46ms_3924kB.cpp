#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        string s;
        cin>>s;
        int con=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='<')
            {
                con+=1;

            }

            else if(s[i]=='>')
            {
                con-=1;

            }


        }
        if(con<1)
        {
            con=con*(-1);
            cout<<con<<endl;
        }
        else
        cout<<con<<endl;
    }
    return 0;
}
