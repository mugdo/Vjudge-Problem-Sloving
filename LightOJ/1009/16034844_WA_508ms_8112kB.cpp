#include<bits/stdc++.h>
using namespace std;
int edage;
int Vampires=0;
int Lykans=0;
int visited[20005];
vector<vector<int> >u(20005);
int BFS(int k)
{
    //cout<<k<<endl;
    queue <int>que;
    que.push(k);
    vector<int>lev(20005);
    visited[k]=1;
    lev[k]=0;

    while(!que.empty())
    {
        //lev++;
        int fnt=que.front();
        que.pop();
        //cout<<fnt<<" ";
        //int con=0;
        for(int i=0;i<u[fnt].size();i++)
        {
            if(visited[u[fnt][i]]!=1)
            {

                que.push(u[fnt][i]);
                visited[u[fnt][i]]=1;
                lev[u[fnt][i]]=lev[fnt]+1;
            }
        }

    }
    //cout<<"sssssssssssssssss";

    for(int k=0;k<lev.size();k++)
    {
        if(k%2==0)
        {
            Vampires+=lev[k];
        }
        else
        {
            Lykans+=lev[k];
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


            int edage=0;
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
                        ss+=BFS(k);
                    }

                }

             }
              //cout<<Lykans<<" "<<Vampires<<endl;


                cout<<"Case "<<j<<": "<<ss<<endl;


            Lykans=0;
            Vampires=0;



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
