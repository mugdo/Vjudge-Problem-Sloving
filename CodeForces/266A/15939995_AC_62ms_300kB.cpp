#include<bits/stdc++.h>
using namespace std;
int pk=0;
int main()
{
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int con=0;
    for(int j=0;j<n-1;j++)
    {
        if(s[j]==s[j+1])
            con++;
    }



    cout<<con<<endl;



    return 0;
}

