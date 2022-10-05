#include<bits/stdc++.h>
using namespace std;

int visited[20005];

int BFS(vector<vector<int> >vec,int k)
{
    //cout<<k<<endl;
    queue <int>que;
    que.push(k);

    int lev[20005];
    visited[k]=1;
    lev[k]=0;

    int Lykans=0,Vampires=0;
    Vampires++;

    while(!que.empty())
    {
        //lev++;
        int fnt=que.front();
        que.pop();
        //cout<<fnt<<" ";
        //int con=0;
        for(int i=0;i<vec[fnt].size();i++)
        {
            if(visited[vec[fnt][i]]!=1)
            {

                que.push(vec[fnt][i]);
                visited[vec[fnt][i]]=1;
                lev[vec[fnt][i]]=lev[fnt]+1;

                if(lev[vec[fnt][i]]%2==0)
                {
                    Vampires++;
                }
                else
                {
                    Lykans++;
                }
            }
        }

    }
    return max(Lykans,Vampires);
}
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        vector<vector<int> >u(20005);

            int edage;
            cin>>edage;
            memset(visited,0,20005);
            int ck=0;
            int pk=0;
            vector<bool>ar(20005,0);
            for(int i=0;i<edage;i++)
            {
                int a,b;
                cin>>a>>b;
                ar[a]=true;
                ar[b]=true;

                u[a].push_back(b);
                u[b].push_back(a);
            }
            //cout<<"u[1][0]="<<pk<<endl;
            int ss=0;
            for(int k=0;k<20005;k++)
            {
                if(ar[k]==1)
                {
                    if(visited[k]==0)
                    {
                       // cout<<"call"<<endl;
                        ss+=BFS(u,k);
                    }

                }

             }
              //cout<<Lykans<<" "<<Vampires<<endl;


                cout<<"Case "<<j<<": "<<ss<<endl;

    }


    return 0;
}
/*

9 8
1 2
1 3
1 4
2 5
3 7
4 8
4 9
5 6
*/
