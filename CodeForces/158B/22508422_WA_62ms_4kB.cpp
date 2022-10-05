#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n ;
    while(cin>>n)
    {
        long long sum=0;
        int temp;
        int fore=0,three=0,two=0,one=0;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
             if(temp==4)
             {
                 sum++;
             }
             else if(temp==three)
             {
                 three++;
             }
             else if(temp==two)
             {
                 two++;
             }
            else if(temp==one)
             {
                 one++;
             }
        }
        sum+=3;
        if(one<=three)
        {
            sum+=three;
            one=0;
        }
        else
        {
            sum+=three;
            one-=three;
        }
        int ck=0;
        if(two%2==0)
        {
            sum+=two/2;
        }
        else
        {
            sum+=two/2+1;
            ck=1;
        }
        if(ck==1)
        {
            if(one>=2)
            {
                one-=2;
            }
        }
        int pk=0;
        if(one>0)
        {
            pk=one/4;
            if(pk*4==one)
            {
                sum+=pk;
            }
            else
            {
                sum+=pk+1;
            }
        }
        cout<<sum<<endl;

    }


   return 0;
}
