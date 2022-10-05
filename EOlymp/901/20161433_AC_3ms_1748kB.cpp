#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    int len=strlen(s);
    int con=0;
    int ck1=0,ck2=0,ck3=0;
    for(int i=1;i<len;i++)
    {
        if(s[i]=='+'||s[i]=='-'||s[i]=='*')
        {
           con++;
        }
        

    }
    cout<<con<<endl;
    return 0;
}
