#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    int len=strlen(s);
    int con=0;
    int ck1=0,ck2=0,ck3=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='+'&&ck1==0)
        {
           con++;
           ck1=1;
        }
        else if(s[i]=='-'&&ck1==0)
        {
            con++;
            ck2=1;
        }
        else if(s[i]=='*'&&ck3==0)
        {
            con++;
            ck3=1;
        }

    }
    cout<<con<<endl;
    return 0;
}
