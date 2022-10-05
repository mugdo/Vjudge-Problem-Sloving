#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=0;
    len=s.size();
    int con=0;
    int con1=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='a')
        {
            con++;
        }
        else
        {
            con1++;
        }
    }
    con--;
    if(con<len/2)
    {
        int pk=0;
        pk=con1-con;
        cout<<len-(pk)<<endl;
    }
    else
    {
        cout<<len<<endl;
    }
    return 0;
}
