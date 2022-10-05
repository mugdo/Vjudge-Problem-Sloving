#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int bed=0;
        int kitc=0;
        int living=0;
        for(int j=0;j<n;j++)
        {
            string s;
            cin>>s;
            //cout<<"s[0]="<<s[0]<<" s[1]="<<s[1]<<" s[2]="<<s[2]<<endl;
            if(s[0]=='b'&&s[1]=='e'&&s[2]=='d')
            {
                bed++;
            }

            else if(s[0]=='k'&&s[1]=='i'&&s[2]=='t'&&s[3]=='c'&&s[4]=='h'&&s[5]=='e'&&s[6]=='n')
            {
                kitc++;
            }
            else if(s[0]=='l'&&s[1]=='i'&&s[2]=='v'&&s[3]=='i'&&s[4]=='n'&s[5]=='g')
            {
                living++;
            }

        }
       int flag=0;
       //cout<<"bed="<<bed<<" kitc="<<kitc<<" living= "<<living<<endl;
       for(int r=0;r<bed;r++)
       {
           if(bed>0&&kitc>0&&living>1)
           {
               flag++;
               living--;
               kitc--;
               bed-=2;
           }
       }
       cout<<flag<<endl;




    }
    return 0;
}
