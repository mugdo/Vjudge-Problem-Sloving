#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m1,m;
        cin>>n>>m1;
        string s;
        deque<int> dq(n);
        //cout<<"size="<<dq.size()<<endl;
        int con=0;
        cout<<"Case "<<i+1<<":"<<endl;
        for(int k=0;k<m1;k++)
        {
            cin>>s;
            if(s=="pushLeft"||s=="pushRight")
            {
                cin>>m;
            }
            if(s=="pushLeft")
            {
                if(con!=3)
                {
                   dq.push_front(m);
                   cout<<"Pushed in left: "<<m<<endl;
                   con++;
                }
                else
                {
                    cout<<"ssThe queue is full"<<endl;
                }

            }
            else if(s=="pushRight")
            {
                if(con!=3)
                {
                    dq.push_back(m);
                    cout<<"Pushed in right: "<<m<<endl;
                    con++;
                }
                else
                {
                     cout<<"The queue is full"<<endl;
                }

            }
            else if(s=="popLeft")
            {
                if(con!=0)
                {
                    int p=dq.front();
                    dq.pop_front();
                    con--;
                    cout<<"Popped from left: "<<p<<endl;
                }
                else
                {
                    cout<<"The queue is empty"<<endl;
                }
            }
            else if(s=="popRight")
            {
                if(con!=0)
                {
                    int p=dq.back();
                    dq.pop_back();
                    con--;
                    cout<<"Popped from right: "<<p<<endl;

                }
                else
                {
                    cout<<"The queue is empty"<<endl;
                }
            }
            //cout<<"k end="<<k<<endl;
            //cout<<"m1="<<m1<<endl;
        }
    }
    return 0;
}

