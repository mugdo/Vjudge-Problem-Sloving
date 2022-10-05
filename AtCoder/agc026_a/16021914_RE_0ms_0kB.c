#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int con=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int k=0;
     for(int i=0;i<n-1;i++)
    {
        //cout<<"ar[i]="<<ar[i]<<" ar[i+1]="<<ar[i+1]<<" i="<<i<<endl;
        if(ar[i]==ar[i+1])
        {
            //cerr << "entering" << endl ;
            k=i;
            //cout<<"ar[i+1]="<<ar[i+1]<<" i+1 ="<<i+1<<endl;
            if(ar[k+1]!=k+1)
            {
                ar[k+1]=k+1;
                //cout<<"if ar[k+1]="<<ar[k+1]<<endl<<endl;
                con++;
            }
            else
            {
                ar[i+1]=n-k-1;
                //cout<<"else ar[i+1]="<<ar[k+1]<<endl;
                con++;
            }
        }


    }

    //cout<<endl;
    cout<<con<<endl;

    return 0;
}
