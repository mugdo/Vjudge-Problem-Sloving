#include<iostream>
using namespace std;
int ar[1000000];
int main()
{
    int n,m;
    while(cin>>n>>m)
    {

        for(int j=0;j<m;j++)
        {
            cin>>ar[j];
        }
        int con=0;
        for(int i=1;i<n;i++)
        {
            for(int k=0;k<m;k++)
            {
                if(i%ar[k]==0)
                {

                     con++;
                     break;
                }
            }

        }
        cout<<con<<endl;
    }
    return 0;
}
