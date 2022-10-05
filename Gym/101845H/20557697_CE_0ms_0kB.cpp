#include<bits/stdc++.h>
using namespace std;
int c(int n)
{
    if(n%4==0)
    {
        if(n%100==0)
        {
           if(n%400==0)
           {
               return 2;
           }
           else
           {
               return 1;
           }
        }
        else
        {
            return 2;
        }
    }
    else

    {
       return 1;
    }
}
int main()
{
    int n;
    cin>>n;
    int k=1867;
    int h=1867;
    int ck=0;
    int temp=0;
    int lip=0;
    int cp=0;
    for(int i=0;i<n;i++)
    {

       temp=c(k);
       if(temp==2)
       {

          // cout<<"k="<<k<<endl;
          // cp++;
           //cout<<"cp="<<cp<<endl;
           break;
       }1
       else
       {
           ck++;
       }
       k++;
    }
    int cr=0;
    int y=0;
    int h1=0;
    for(int i=k;i<=n+h;i++)
    {
          //cout<<"k="<<i<<endl;
          if(lip>=9)
          {
              cr++;
          }
          if(lip==9&&h1==0)
          {
              lip--;
              h1=1;
          }

             if(cr%25==0&&cr>24)
             {
                 if(c(i)==2)
                 {
                     lip++;
                 }
             }
             else
             {
                 lip++;
             }

          //cout<<"lip="<<lip<<endl;
          i=i+3;
    }
    //cout<<"cp="<<cp<<endl;
   // cout<<"lip="<<lip<<endl;
    int sum;
    sum=lip*366+(n-lip)*365;
    int ss=sum%7;
    //cout<<"sum="<<sum<<endl;
    //cout<<"ss "<<ss<<endl;
    if(n==0)
    {
        cout<<"Sunday"<<endl;
    }
    else if(ss==1)
    {
        cout<<"Monday"<<endl;
    }
    else  if(ss==2)
    {
        cout<<"Tuesday"<<endl;
    }
    else  if(ss==3)
    {
        cout<<"Wednesday"<<endl;
    }
     else  if(ss==4)
    {
        cout<<"Thursday"<<endl;
    }
     else  if(ss==5)
    {
        cout<<"Friday"<<endl;
    }
     else  if(ss==6)
    {
        cout<<"Saturday"<<endl;
    }
     else  if(ss==0)
    {
        cout<<"Sunday"<<endl;
    }

    return 0;
}
