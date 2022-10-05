#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int left=0,l=1;
    int right=n-1,r=1;
    int left_parunit=0;
    int right_parunit=0;
    int dif=0;
    while(left<right)
    {
        left_parunit=(ar[left+1]-ar[left])*l;
        right_parunit=(ar[right]-ar[right-1])*r;
        if(left_parunit==0)
        {
            l++;
            left++;
            while(left<right)
            {
                left_parunit=(ar[left+1]-ar[left])*l;
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
            right++;
            while(left<right)
            {
                right_parunit=(ar[right]-ar[right-1])*r;
                if(right_parunit==0)
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
        //cout<<"left_parunit="<<left_parunit<<" right_paruni="<<right_parunit<<"   k="<<k<<endl;
        if(left_parunit<=right_parunit)
        {
            if(left_parunit<=k)
            {
                for(int j=0;j<left+1;j++)
                {
                    ar[j]=ar[left+1];
                }
                k=k-left_parunit;
                l++;
                left++;
            }
            else
            {
                for(int j=0;j<left+1;j++)
                {
                    ar[j]=ar[j]+k;
                    k=0;
                    if(k==0)
                    {
                        break;
                    }
                }
                k=0;
                break;
            }
        }
        else
        {
            if(right_parunit<=k)
            {
                for(int j=right;j>=right-1;j--)
                {
                    ar[j]=ar[right-1];
                }
                k=k-right_parunit;
                right--;
                r++;
            }
            else
            {
                for(int j=right;j>=right-1;j--)
                {
                    ar[j]=ar[j]+k;
                    k=0;
                    if(k==0)
                    {
                        break;
                    }

                }
                k=0;
                break;
            }

        }
        if(k==0)
        {
            break;
        }




    }
    int mk=0;
    sort(ar,ar+n);


    cout<<ar[n-1]-ar[0]<<endl;
    return 0;
}
