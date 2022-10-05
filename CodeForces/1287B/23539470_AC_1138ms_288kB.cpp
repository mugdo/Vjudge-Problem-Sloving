#include<bits/stdc++.h>
using namespace std;
string ar[1500];
int rk=0;
int bsearch(int i,int j,string temp)
{
    int mid=0;
    mid=(i+j)/2;
    //cout<<"mid="<<mid<<" string "<<temp<<endl;

    if(ar[mid]==temp)
    {
        //cout<<"ar[mid]="<<ar[mid]<<endl;
        rk=1;
    }
    else if(ar[mid]<temp&&i<j)
    {
        bsearch(mid+1,j,temp);
    }
    else if(ar[mid]>temp&&i<j)
    {
       bsearch(i,mid-1,temp);
    }
   if(rk==1)
   {
       return 1;
   }
   else
   {
       return 0;
   }


}
int main()
{
    int n,k;
    cin>>n>>k;
    int con=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    string temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            temp="";
            for(int p=0;p<k;p++)
            {
                //cout<<"ar[i][p]="<<ar[i][p]<<"  ar[j][p]="<<ar[j][p]<<endl;
                if(ar[i][p]==ar[j][p])
                {
                    if(ar[i][p]=='S')
                    {
                        temp+='S';
                    }
                    else if(ar[i][p]=='E')
                    {
                        temp+='E';
                    }
                    else
                    {
                        temp+='T';
                    }
                }
                else if(ar[i][p]!=ar[j][p])
                {
                   if(ar[i][p]=='S')
                   {
                      // cout<<"ar[i][p]="<<ar[i][p]<<endl;
                       if(ar[j][p]=='E')
                       {
                           temp+='T';
                       }
                       else if(ar[j][p]=='T')
                       {
                           temp+='E';
                       }
                   }
                   else if(ar[i][p]=='E')
                   {
                       if(ar[j][p]=='S')
                       {
                           temp+='T';
                       }
                       else if(ar[j][p]=='T')
                       {
                           temp+='S';
                       }
                   }
                   else if(ar[i][p]=='T')
                   {
                       if(ar[j][p]=='E')
                       {
                           temp+='S';
                       }
                       else if(ar[j][p]=='S')
                       {
                           temp+='E';
                       }
                   }
                }
                //cout<<"tm="<<temp<<endl;

            }
            //cout<<"Temp="<<temp<<endl;
            int ckk=0;
            //cout<<"ckk="<<ckk<<endl;
            rk=0;
           ckk=bsearch(j+1,n-1,temp);
           //cout<<"ckk="<<ckk<<endl;
           if(ckk==1)
           {
               //cout<<"ckk="<<ckk<<endl;
               con++;
           }
           //cout<<"con="<<con<<endl;
        }
    }
    cout<<con<<endl;

    return 0;
}
