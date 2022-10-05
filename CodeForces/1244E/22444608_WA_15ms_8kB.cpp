#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    long long left=0,l=1;
    long long right=n-1,r=1;
    long long left_parunit=0;
    long long right_parunit=0;
    while(left<right)
    {
        left_parunit=(ar[left+1]-ar[left]);
        right_parunit=(ar[right]-ar[right-1]);
        //cout<<"left_parunit="<<left_parunit<<" right_paruni="<<right_parunit<<"   k="<<k<<endl;
        if(left_parunit==0)
        {
            l++;
            left++;
            while(left<right)
            {
                left_parunit=ar[left+1]-ar[left];
                if(left_parunit==0)
                {
                   l++;
                   left++;
                }
                else
                {
                    break;
                }

            }
        }
        if(right_parunit==0)
        {
            r++;
            right--;
            while(left<right)
            {
                right_parunit=ar[right]-ar[right-1];
                if(right_parunit==0)
                {
                   r++;
                   right--;
                }
                else
                {
                    break;
                }

            }
        }
        //cout<<"left_parunit="<<left_parunit<<" right_paruni="<<right_parunit<<"   k="<<k<<endl;
        //cout<<"l="<<l<<"  r="<<r<<endl;
        if(l<=r)
        {
            if(left_parunit*l<=k)
            {
               // cout<<"left_parunit*l="<<left_parunit*l<<endl;
                for(int j=0;j<left+1;j++)
                {
                    ar[j]=ar[left+1];
                }
                k=k-left_parunit*l;
                l++;
                left++;
            }
            else
            {
                int p=r;
                int j=0;
                 while(p!=0)
                {
                    ar[j]+=(k/l);
                    j++;
                    p--;
                }
                k=0;
                break;
            }
        }
        else
        {
            if(right_parunit*r<=k)
            {
                //cout<<"right_parunit*r="<<right_parunit*r<<endl;


                for(int j=right;j>=right-1;j--)
                {
                    ar[j]=ar[right-1];
                }
                k=k-right_parunit*r;
                right--;
                r++;
            }
            else
            {
                int p=r;
                int j=n-1;
                while(p!=0)
                {
                    ar[j]-=(k/r);
                    j--;
                    p--;
                }

                k=0;
                break;
            }

        }
        if(k==0)
        {
            break;
        }

//     for(int i=0;i<n;i++)
//    {
//        cout<<ar[i]<<" ";
//    }
//    cout<<endl;


    }
    sort(ar,ar+n);
    //cout<<"ss"<<endl;

//    for(int i=0;i<n;i++)
//    {
//        cout<<ar[i]<<" ";
//    }
//    cout<<endl;
    cout<<ar[n-1]-ar[0]<<endl;
    return 0;
}

