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
            if(s[0]=='b'||s[0]=='B')
            {
                bed++;
            }

            else if(s[0]=='k'||s[0]=='K')
            {
                kitc++;
            }
            else if(s[0]=='l'||s[0]=='L')
            {
                living++;
            }

        }
       int flag=0;
       //cout<<"bed="<<bed<<" kitc="<<kitc<<" living= "<<living<<endl;
       for(int r=0;r<bed;r++)
       {
           if(bed>0&&kitc>0&&living>=2)
           {
               flag++;
               bed--;
               kitc--;
               living-=2;
           }
           else
           {
               break;
           }
       }
       cout<<flag<<endl;




    }
    return 0;
}
