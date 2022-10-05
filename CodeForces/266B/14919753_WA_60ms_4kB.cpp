#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    char s[n];
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B'&&s[i+1]=='G')
        {
            s[i+1]='B';
            s[i]='G';
            i++;

        }
    }
    for(int j=0;j<n;j++)
    {
        cout<<s[j];
    }
    cout<<endl;
    return 0;
}
