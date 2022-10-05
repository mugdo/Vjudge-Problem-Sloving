#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int con=0;
    for(int i=0;i<3;i++)
    {
        if(s[i]==t[i])
            con++;
    }
    cout<<con<<endl;
}
