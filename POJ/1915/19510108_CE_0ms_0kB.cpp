#include<bits/stdc++.h>
using namespace std;
int ar[400][400];
bool ck(int pos,int n)
{
  if(pos>=0&&pos<=n)
  {
    return true;
  }
  else
  {
    return false;
  }
}
struct king
{
  int p;
  int q;

};
void mov(int s1,int s2,int d1,int d2,int n)
{
 king obj;
 obj.p=s1;
 obj.q=s2;
 int vis[400][400]={0};
 int dis[400][400]={0};
 queue<king>qu;
 qu.push(obj);
 vis[obj.p][obj.q]=1;
 dis[obj.p][obj.q]=0;
 //cout<<"d1="<<d1<<"  d2="<<d2<<endl;
 //cout<<dis[obj.p][obj.q]<<endl;
 int go1[10]={-1,-2,-2,-1,1,2,2,1};
 int go2[10]={2,1,-1,-2,-2,-1,1,2};
 //cout<<s1<<endl;
 while(!qu.empty())
 {

   king font=qu.front();
   //cout<<"font.p="<<font.p<<endl;
   //cout<<"font.q="<<font.q<<endl;
   if(font.p==d1&&font.q==d2)
    {
        break;
    }
   qu.pop();
   for(int i=0;i<8;i++)
   {
      int current_position_i=font.p+go1[i];
      int current_position_j=font.q+go2[i];
      bool position1=ck(current_position_i,n);
      bool position2=ck(current_position_j,n);
      if(position1==true&&position2==true&&ar[current_position_i][current_position_j]!=1)
      {
         ar[current_position_i][current_position_j]=1;
         obj.p=current_position_i;
         obj.q=current_position_j;
         dis[obj.p][obj.q]=dis[font.p][font.q]+1;
         qu.push(obj);



      }

   }

 }
 //cout<<"d1="<<d1<<"  d2="<<d2<<endl;
 cout<<dis[d1][d2]<<endl;


}
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n;
    for(int j=0;j<=n;j++)
    {
      for(int k=0;k<=n;k++)
      {
        ar[j][k]=0;
      }
    }
    cin>>n;
    int s1,s2;
    int d1,d2;
    cin>>s1>>s2;
    cin>>d1>>d2;
    mov(s1,s2,d1,d2,n);

  }
  return 0;
}
