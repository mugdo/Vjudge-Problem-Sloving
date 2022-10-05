#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s=="++X")
            flag++;
        else if(s=="X++")
            flag++;
        else if(s=="X--")
            flag--;
        else if(s=="--X")
            flag--;

    }
    cout<<flag<<endl;
    return 0;
}
