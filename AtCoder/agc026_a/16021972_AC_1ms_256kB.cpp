#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[110];
    int con=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

     for(int j=0;j<n-1;j++)
    {
        //cout<<"ar[i]="<<ar[i]<<" ar[i+1]="<<ar[i+1]<<" i="<<i<<endl;
        if(ar[j]==ar[j+1])
        {
            //cerr << "entering" << endl ;

            //cout<<"ar[i+1]="<<ar[i+1]<<" i+1 ="<<i+1<<endl;
            if(ar[j+1]!=j+1)
            {
                ar[j+1]=j+1;
                //cout<<"if ar[k+1]="<<ar[k+1]<<endl<<endl;
                con++;
            }
            else
            {
                ar[j+1]=n-j-1;
                //cout<<"else ar[i+1]="<<ar[k+1]<<endl;
                con++;
            }
        }


    }

    //cout<<endl;
    cout<<con<<endl;

    return 0;
}
