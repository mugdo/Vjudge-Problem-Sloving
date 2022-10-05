#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long total,p;
        cin>>total>>p;
        int ar[p];
        int br[p];
        long long sum=0;
        int mn=1000010;
        for(int j=0;j<p;j++)
        {
           cin>>ar[j];
           mn=min(mn,ar[j]);
           sum+=ar[j];
        }
        sort(br,br+p);
        long long avg=total/p;
        //cout<<"sum="<<sum<<endl;
        memset(br,0,sizeof(br));
        if(total>sum)
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        else if(mn<avg)
        {
            int sum2=0;
            int con=0;
            for(int j=0;j<p;j++)
            {
                    br[j]+=mn;
                    sum2+=mn;
                    ar[j]-=mn;

            }
            total-=sum2;
            long long  avg=0;
            avg=sum/p;
            long long sum3=0;
            while(avg!=0)
            {
               sum3=0;
               for(int j=0;j<p;j++)
               {
                   //cout<<"wtatal="<<total<<endl;
                   if(avg<=ar[j]&&total!=0)
                   {
                       if(total-avg>=0)
                       {
                            br[j]+=avg;
                            total-=avg;
                            ar[j]-=avg;
                       }

                   }
               }
               if(total==0)
               {
                   break;
               }
               avg=total/p;
            }
            if(total!=0)
            {
                int con=0;
                for(int j=0;j<p;j++)
                {
                   // cout<<"ar[j]="<<ar[j]<<endl;
                    if(ar[j]!=0)
                    {
                        con++;
                    }
                }
                int con2=0;
                con2=con;
                if(con2>=total*2)
                {
                    for(int j=0;j<p;j++)
                    {
                       // cout<<"ar[j]="<<ar[j]<<endl;
                        if(ar[j]!=0&&total!=0)
                        {
                            br[j]+=1;
                            total--;
                        }
                        j++;

                    }
                }
                else
                {
                    for(int j=0;j<p;j++)
                    {
                       // cout<<"ar[j]="<<ar[j]<<endl;
                        if(ar[j]!=0&&total!=0)
                        {
                            br[j]+=1;
                            total-=1;
                        }


                    }
                }

                for(int j=0;j<p;j++)
                {
                    if(j!=p-1)
                    cout<<br[j]<<" ";
                    else
                        cout<<br[j]<<endl;
                }


            }
            else
            {
                 for(int j=0;j<p;j++)
                {
                    if(j!=p-1)
                    cout<<br[j]<<" ";
                    else
                        cout<<br[j]<<endl;
                }
            }



        }
        else
        {
             for(int j=0;j<p;j++)
                {
                    if(j!=p-1)
                    cout<<avg<<" ";
                    else
                        cout<<avg<<endl;
                }
        }

    }
    return 0;
}
