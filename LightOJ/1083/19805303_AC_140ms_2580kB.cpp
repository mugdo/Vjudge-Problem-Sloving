#include<bits/stdc++.h>
using namespace std;
struct s
{
    int hight;
    int con;
};

int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int ar[n];
        stack<s>st;
        s a[n];
        s temp;
        for(int j=0; j<n; j++)
        {
            cin>>ar[j];
            temp.hight=ar[j];
            temp.con=1;
            a[ j ] = temp ;
        }

        int mk=0;
        int flag=1;
        s temp2;
        s tempt;
        tempt.hight=ar[0];
        tempt.con=1;
        st.push(tempt);
        for(int j=1; j<n; j++)
        {
            // cout<<"ss"<<endl;
            flag=1;
            //cout<<"ar[i]="<<st.top().hight<<" ar[j]="<<ar[j]<<endl;
            if(st.top().hight<=ar[j])
            {
               // cout<<"push"<<endl;
                temp2.hight=ar[j];
                temp2.con=1;
                st.push(temp2);
            }
            else
            {
                // cout<<"ar[i]="<<ar[i]<<" ar[i+1]="<<ar[i+1]<<endl;
                s temp4;
                temp4.hight=st.top().hight;
                //cout<<"temp4="<<temp4.hight<<"  ar[j]="<<ar[j]<<endl;
                while(!st.empty() && st.top().hight>ar[j])
                {
                    int sum=0;
                    flag=0;
                    //cout<<"ss"<<endl;
                    //cout<<"st.top().hight="<<st.top().hight<<endl;
                    ////cout<<"st.top().con="<<st.top().con<<endl;
                    sum=st.top().con*st.top().hight;
                    //cout<<"sum="<<sum<<endl;
                    if(mk<sum)
                    {
                        mk=sum;
                    }
                   // cout<<"pop="<<st.top().hight<<endl;
                     flag=st.top().con;
                      st.pop();
                      if(!st.empty()&&st.top().hight>ar[j])
                      {
                          st.top().con+=flag;
                      }
                    //cout<<"flag="<<flag<<endl;
                }
                //cout<<"sk"<<endl;
                s temp3;
                temp3.hight=ar[j];
                temp3.con=flag+1;
                //cout<<"temp3.hight="<<temp3.hight<<endl;
                //cout<<"temp3.con="<<temp3.con<<endl;
                st.push(temp3);
            }
        }
        int ck=1;
       //cout<<"end"<<endl;
     // cout<<"st.size()="<<st.size()<<endl;
     //cout<<"mk="<<mk<<endl;
     int rk=0;
        while(!st.empty())
        {
            //cout<<"st.top().hight="<<st.top().hight<<"  st.top().con="<<st.top().con<<endl;
            rk=0;
            if(st.top().hight*st.top().con>mk)
            {
                mk=st.top().hight*st.top().con;
            }
            rk=st.top().con;
            st.pop();
            if(!st.empty())
            {
                st.top().con+=rk;
            }

        }
        cout<<"Case "<<i+1<<": "<<mk<<endl;

    }

    return 0;
}
/*
2
7
2 1 4 5 1 3 3
5
4 4 3 2 4
*/
