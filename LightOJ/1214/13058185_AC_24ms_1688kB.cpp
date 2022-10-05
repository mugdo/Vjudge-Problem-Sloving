#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string x;
    int cas=0,b,c,i;
    cin>>t;
while(t)
{
    long long a=0;
    if(t==0)
        break;
    cin>>x;
    cin>>b;
    if(x[0]=='-')
        c=1;
    else
        c=0;
    int l=x.size();
    for(i=c;i<l;i++)
    {
        a=(a*10)+(x[i]-'0');
        a=a%b;
    }
    if(a==0)
        cout<<"Case "<<++cas<<": divisible"<<endl;
    else
        cout<<"Case "<<++cas<<": not divisible"<<endl;
    t--;
}
return 0;
}
