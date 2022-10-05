#include<bits/stdc++.h>
using namespace std;
string ss;
int z=0;
int e=0;
void sum(char x,char y,int ind)
{
    //cout<<"x="<<x<<" y="<<y<<endl;
    int p=0,q=0;
    p=x-'0';
    q=y-'0';
   // cout<<"p="<<p<<" q="<<q<<endl;
    int sum=0;
    sum=p+q;
   // cout<<"sum="<<sum<<endl;
    if(e>0)
    {

        sum=sum+e;
        e=0;
    }
    if(sum>9)
    {
       int r=sum%10;
       ss[z]=r+'0';
       //cout<<"ss[z]"<<ss[z]<<endl;

       z++;
       e=sum/10;
    }
    else
    {
        char v=sum+'0';
       // cout<<"v="<<v<<endl;
        ss[z]=v;
        //cout<<"ss[z]="<<ss[z]<<endl;
        z++;
    }
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n1=0,n2=0;
    n1=s1.size();
    n2=s2.size();
    int k=max(n1,n2);

    for(int i=n1-1,j=n2-1;;i--,j--)
    {
        if(j>=0&&i>=0)
        {
             char c1,c2;
              c1=s1[i];
              c2=s2[j];
        //cout<<"c1="<<c1<<"c2="<<c2<<endl;
              sum(c1,c2,i);

        }
        //cout<<"i="<<i<<" j="<<j<<endl;
        if(i<0)
        {
             char c11,c22;

              c22=s2[j];
              c11='0';
              if(j<0)
                break;
        //cout<<c1<<c2<<endl;
            sum(c11,c22,i);


        }
        if(j<0)
        {
             char c11,c22;
              c11=s1[i];
              c22='0';
               if(i<0)
                break;

        //cout<<c1<<c2<<endl;

            sum(c11,c22,i);


        }

    }
    for(int i=k-1;i>=0;i--)
    {
        cout<<ss[i];
    }
    cout<<endl;

    return 0;
}
