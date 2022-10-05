#include<bits/stdc++.h>
using namespace std;
int n;
int l=0;
int Vampires=0;
int Lykans=0;
int visited[20005];
int con=0;
int BFS(vector<int>u[],int p)
{
    queue<int>que;
    que.push(p);
    Lykans=0;
    Vampires=0;
    l=0;
    l++;
    Vampires++;
    visited[p]=1;
    while(!que.empty())
    {
         //cout<<"LYkan="<<Lykans<<" Vampires="<<Vampires<<" l="<<l<<endl;
         l++;
         con=0;
        //memset(visited,0,n);
        int fon=que.front();
        que.pop();
        for(int i=0;i<u[fon].size();i++)
        {
            //cout<<"visited[u[fon][i]]="<<visited[u[fon][i]]<<endl;
           if(visited[u[fon][i]]!=1)
           {
               //cout<<"ss"<<endl;
                con+=1;
                //cout<<"con="<<con<<endl;
                que.push(u[fon][i]);
                visited[u[fon][i]]=1;
           }
        }
       //cout<<"l="<<l<<endl;

        if(l%2==0)
        {
            Lykans+=con;

        }
        else
        {
            Vampires+=con;
        }
    }
    //cout<<"LYkan="<<Lykans<<" Vampires="<<Vampires<<endl;
    return max(Lykans,Vampires);

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
         n=0;
         vector<int>u[1000];
        cin>>n;
        int arr[n];
        for(int g=0;g<n;g++)
        {
            arr[g]=0;
        }
        memset(visited,0,20005);
        for(int j=0;j<n;j++)
        {
            int a=0,b=0;
            cin>>a>>b;
            arr[j]=a;
            //cout<<"a="<<a<<" b="<<b<<endl;
            u[a].push_back(b);
            u[b].push_back(a);

        }
        int ss=0;
        for(int k=0;k<n;k++)
        {


                if(visited[arr[k]]!=1)
                    {

                        ss+=BFS(u,arr[k]);
                        //cout<<"ss="<<ss<<endl;
                    }


             //cout<<u[k]<<endl;



        }

        cout<<"Case "<<i+1<<": "<<ss<<endl;
        l=0;
        con=0;
    }
    return 0;
}
