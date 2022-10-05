#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[10][10];
    int a[10][10];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>ar[i][j];

        }
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=1;

        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[i][j]%2!=0)
            {
                a[i][j]=0;

                if(i-1<3&&i-1>=0&&j<3&&j>=0)
                {
                    if(a[i-1][j]==1)
                       a[i-1][j]=0;


                }




                if(i<3&&i>=0&&j+1<3&&j+1>=0)
                {
                    if(a[i][j+1]==1)
                      a[i][j+1]=0;

                }




                if(i+1<3&&i+1>=0&&j<3&&j>=0)
                {
                    if(a[i+1][j]==1)
                     a[i+1][j]=0;
                     //cout<<"i="<<i<<endl;

                }




                if(i<3&&i>=0&&j-1<3&&j-1>=0)
                {
                    if(a[i][j-1]==1)
                    a[i][j-1]=0;

                }

        }





        }


    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}
