#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,m;
    cin>>n>>m;
    int ar[1060];
    int a=0;
    int con=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ar[i]=a;
        a=0;
        con++;

    }
    int s=0;
    //s=sizeof(ar);
    int sum=0;
    sort(ar,ar+con);
    int ck=0;
    for(int i=con-1;i>0;i--)
    {
        //cout<<ar[i];
        sum+=ar[i];
        ck=ck+1;
        if(sum>=m){
            break;
        }


    }
    cout<<ck<<endl;

    return 0;

}
