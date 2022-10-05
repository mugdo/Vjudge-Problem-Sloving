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

                if(a[i-1][j]==1&&i<3&&j<3)
                {
                    a[i-1][j]=0;

                }
                else if(i<3&&j<3)
                {
                    a[i-1][j]=1;
                    //cout<<"shaiful";

                }



                if(a[i][j+1]==1&&i<3&&j<3)
                {
                    a[i][j+1]=0;

                }
                else if(i<3&&j<3)
                {
                    a[i][j+1]=1;

                }



                if(a[i+1][j]==1&&i<3&&j<3)
                {
                    a[i+1][j]=0;
                    //cout<<"i="<<i<<endl;

                }
                else if(i<3&&j<3)
                {
                    a[i+1][j]=1;

                }



                if(a[i][j-1]==1&&i<3&&j<3)
                {
                    a[i][j-1]=0;

                }
                else if(i<3&&j<3)
                {
                    a[i][j-1]=1;

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
