#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    string p1,p2,p3,p4,p5;
    cin>>p1>>p2>>p3>>p4>>p5;
    //cout<<"p4="<<p4[0]<<"  s[0]="<<s[0]<<endl;
    if(p1[1]==s[1]||p2[1]==s[1]||p3[1]==s[1]||p4[1]==s[1]||p5[1]==s[1]||p1[0]==s[0]||p2[0]==s[0]||p3[0]==s[0]||p4[0]==s[0]||p5[0]==s[0])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

   return 0;
}
