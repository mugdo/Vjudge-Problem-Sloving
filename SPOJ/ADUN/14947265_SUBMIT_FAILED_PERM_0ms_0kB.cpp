#include<bits/stdc++.h>
using namespace std;
string ss;
int z=0;
int e=0;
void sum(char x,char y,int ind)
{
    int p=0,q=0;
    p=x-'0';
    q=y-'0';
    int sum=0;
    sum=p+q;
    if(e>0)
    {

        sum=sum+e;
        e=0;
    }
    if(sum>9)
    {
       int r=sum%10;
       ss[z]=r+'0';

       z++;
       e=sum/10;
    }
    else
    {
        char v=sum+'0';
        ss[z]=v;
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
              sum(c1,c2,i);

        }
        if(i<0)
        {
             char c11,c22;

              c22=s2[j];
              c11='0';
              if(j<0)
                break;
            sum(c11,c22,i);


        }
        if(j<0)
        {
             char c11,c22;
              c11=s1[i];
              c22='0';
               if(i<0)
                break;

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
