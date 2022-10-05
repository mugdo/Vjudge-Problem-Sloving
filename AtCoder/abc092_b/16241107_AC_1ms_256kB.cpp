#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d,x;
    cin>>d>>x;
    int ar[n];
    int sum=0;
    sum=x+n;
    int tem=d-1;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=tem/ar[i];
    }

    cout<<sum<<endl;
    return 0;
}
