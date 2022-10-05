#include<bits/stdc++.h>
using namespace std;
int bfs(int sorce,int m,vector<int>vc[1010])
{
   int vis[1010]={0};
   int lev[1010];
   int dis[1010]={0};
   int big=0;
   vector<int>level[1010];
   int ckarray[1010]={0};
   vis[sorce]=1;
   big=0;
   //cout<<"ss"<<endl;
   queue<int>q;
   q.push(sorce);
   dis[sorce]=0;
   level[0].push_back(sorce);
   while(!q.empty())
   {

      int fon=q.front();
      q.pop();
      //cout<<"fon="<<fon<<endl;
      for(int i=0;i<vc[fon].size();i++)
      {
         //cout<<"vis[vc[fon][i]]="<<vis[vc[fon][i]]<<endl;
          if(vis[vc[fon][i]]!=1)
          {
             vis[vc[fon][i]]=1;
             dis[vc[fon][i]]=dis[fon]+1;
             level[dis[vc[fon][i]]].push_back(vc[fon][i]);
             if(big<dis[vc[fon][i]])
             {
                big=dis[vc[fon][i]];
             }
             q.push(vc[fon][i]);

          }

      }



   }
   int con=0;
   //cout<<"big="<<big<<endl;
   for(int p=big;p>=0;p--)
   {

      for(int f=0;f<level[p].size();f++)
      {

         if(ckarray[level[p][f]]==0)
         {
             //cout<<level[p][f]<<"  ="<<endl;
             con++;

             for(int h=0;h<vc[level[p][f]].size();h++)
             {
                //cout<<"ckarray[level[p][f]]="<<vc[level[p][f]][h]<<endl;

                ckarray[vc[level[p][f]][h]]=1;
             }
             //cout<<endl;
         }

      }
      //cout<<endl;
   }



   return con;

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        //g=0;
        int degre[1010]={0};
        vector<int>vc[1010];
        string s;
        getline(cin,s);
        cin.ignore();
        int n,m;
        cin>>n>>m;
        int a,b;
        int ck=0;
        for(int j=0;j<m;j++)
        {
          cin>>a>>b;
          vc[a].push_back(b);
          degre[a]+=1;
          vc[b].push_back(a);
          degre[b]+=1;


        }
        cout<<"Case "<<i+1<<": "<<bfs(1,m,vc)<<endl;
    }

    return 0;
}
