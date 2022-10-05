#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string add[n];
    string fin[n];
    string s1,s2;
    int a=0,f=0;
    for(int i=0;i<n;i++)
    {
       cin>>s1>>s2;
       if(s1=="add")
       {
           add[a]=s2;
           //cout<<"add[a]="<<add[a]<<endl;
           a++;

       }
       else
       {
           int flag=0,con;
           int siz=s2.size();
           for(int k=0;k<a;k++)
           {
              int ck=0;
              con=0;
              for(int j=0;j<siz;j++)
              {
                //cout<<"add[j]="<<add[k][j]<<" s2[j]="<<s2[j]<<endl;
                 if(add[k][j]==s2[j])
                 {
                    con++;

                 }

                //cout<<"con="<<con<<endl;
             }
            //cout<<"con="<<con<<endl;
            if(con==siz)
            {
              flag++;
            }



         }
            con=0;
            cout<<flag<<endl;

        }



    }
    return 0;



}
