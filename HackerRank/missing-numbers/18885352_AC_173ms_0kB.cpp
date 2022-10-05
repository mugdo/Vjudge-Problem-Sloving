#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000];
    int b[10000];
    memset(a,0, sizeof(a));
    memset(b,0, sizeof(b));
    int n1;
    cin>>n1;
    int k;
    int a1[n1];
    for(int i=0;i<n1;i++)
    {
       cin>>k;
       a1[i]=k;
       //cout<<"a[k]="<<a[k]<<endl;
       a[k]+=1;
    }
    int n2;
    //cout<<"ss"<<endl;
    cin>>n2;
    int k1;
     for(int i=0;i<n2;i++)
    {
       cin>>k1;
       b[k1]+=1;
      // cout<<"b[k]="<<b[k]<<endl;
    }
    int arr[n1];
    int j=0;
    for(int i=0;i<n1;i++)
    {
        //cout<<"ss1"<<endl;
     // cout<<"a1[i]="<<a1[i]<<" a[a1[i]]="<<a[a1[i]]<<" b[a1[i]]="<<b[a1[i]]<<endl;
       if(a[a1[i]]!=b[a1[i]])
       {
           arr[j]=a1[i];
           j++;
       }
    }
    sort(arr,arr+j-1);

    for(int i=0;i<j;i++)
    {
       for(int k=i+1;k<j;k++)
       {
           if(arr[i]==arr[k])
           {
               arr[k]=0;
           }
       }
    }
    //cout<<endl;
    for(int i=0;i<j;i++)
    {
        if(arr[i]!=0)
        {
           cout<<arr[i]<<" ";
        }

    }

    cout<<endl;

    return 0;
}
