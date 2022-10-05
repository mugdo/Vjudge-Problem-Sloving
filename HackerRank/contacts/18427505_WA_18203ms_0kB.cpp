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
           fin[f]=s2;
           //cout<<"fin[f]="<<fin[f]<<endl;
           f++;
       }

    }
    sort(add,add+a);
    sort(fin,fin+f);
    for(int i=0;i<f;i++)
    {
        int siz=fin[i].size();
        int con=0;
        int flag=0;
        for(int k=0;k<a;k++)
        {
            for(int j=0;j<siz;j++)
            {
                //cout<<"add[j]="<<add[j]<<" fin[j]="<<fin[j]<<endl;
                if(add[i][j]==fin[i][j])
                {
                    con++;
                }
            }
            if(con==siz)
            {
              flag++;
            }
            con=0;
        }
        cout<<flag<<endl;



    }


}
