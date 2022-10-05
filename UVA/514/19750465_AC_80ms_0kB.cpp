#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;

   while(cin>>n)
   {

     if(n==0)
     {
        break;
     }
     while(1)
     {
          int ar[n];
          int a;
          int ck=0;
          int pk=0;
          for(int i=0;i<n;i++)
          {
             cin>>a;
             if(a==0&&pk==0)
             {
                ck=1;
                break;
             }
             pk=1;
             ar[i]=a;

          }

          int rk=0;
          if(ck==1)
          {
            cout<<endl;

            break;
          }
          else
          {

               stack<int>st;
               int ck=0;
                for(int i=1;i<=n;i++)
                {
                    st.push(i);
                    //cout<<"push="<<i<<endl;
                    if(st.top()==ar[ck])
                    {
                       //cout<<"pop="<<st.top()<<endl;
                       st.pop();
                       ck++;
                       while(1)
                       {
                         if(!st.empty())
                         {
                            if(ar[ck]==st.top())
                            {
                              //cout<<"pop="<<st.top()<<endl;
                               st.pop();
                               ck++;
                            }
                            else
                            {
                              break;
                            }

                         }
                         else
                         {
                            break;
                         }
                       }
                    }
                }
                if(!st.empty())
                {
                   cout<<"No"<<endl;
                }
                else
                {
                  cout<<"Yes"<<endl;
                }
          }

     }

   }


    return 0;
}
