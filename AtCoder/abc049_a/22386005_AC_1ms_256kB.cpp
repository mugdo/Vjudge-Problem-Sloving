#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    while(cin>>s)
    {
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
        {
            cout<<"vowel"<<endl;
        }
        else
        {
            cout<<"consonant"<<endl;
        }
    }

    return 0;
}
