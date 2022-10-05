#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s[10];
        cin>>s[0]>>s[1]>>s[2]>>s[3]>>s[4]>>s[5]>>s[6]>>s[7]>>s[8];
        char ck;
        int pk=0;
        int con=0;
        for(int j=0;j<9;j++)
        {
            pk=j;
            ck=s[0][j];
            for(int k=0;k<9;k++)
            {
                //cout<<"s[j][k]=="<<s[j][k]<<" ck="<<ck<<endl;
                if(s[0][k]==ck&&k!=pk)
                {
                    con=1;
                   // cout<<"sssssssssssssssssssssssssssssssssssssssss"<<endl;
                    break;
                }
            }
           // cout<<endl;
            for(int r=1;r<9;r++)
            {
               // cout<<"s[r][j]=="<<s[r][j]<<" ck="<<ck<<endl;
                if(s[r][j]==ck)
                {
                    con=1;
                    //cout<<"ssssssssssssssssssssssssssssssssssssssss";
                    break;
                }
            }
            //cout<<endl;
            if(con==1)
            {
                break;
            }
        }
        if(con==1)
        {
            cout<<"Invalid"<<endl;
        }
        else
        {
            cout<<"Valid"<<endl;
        }


    }



   return 0;
}