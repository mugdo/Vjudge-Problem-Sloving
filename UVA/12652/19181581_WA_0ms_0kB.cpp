#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,l;
    while(cin>>l>>c)
    {
        int count=0;
        int ar[l][c];
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>ar[i][j];
            }
        }
        for(int i=0;i<1;i++)
        {
            for(int j=0;j<c-1;j++)
            {
                int pk1=0;
                int pk2=0;
               // cout<<"ar[i][j]="<<ar[i][j]<<" ar[i][j+1]+1"<<ar[i][j+1]<<endl;
                if(ar[i][j+1]!=(ar[i][j]+1))
                {
                    count++;
                    //cout<<"ar[i][j]="<<ar[i][j]<<" ar[i][j+1]="<<ar[i][j+1]<<endl;
                    pk1=i;
                    pk2=j+1;
                    //cout<<"pk1="<<pk1<<"  pk2="<<pk2<<endl;
                    int ck1=0,ck2=0;
                    for(int k=0;k<c;k++)
                    {
                        if((ar[i][j]+1)==ar[i][k])
                        {
                            //cout<<"ar[0][k]="<<ar[0][k]<<endl;
                            ck1=i;
                            ck2=k;
                        }
                    }

                    int temp=0;
                    for(int p=0;p<l;p++)
                    {
                        temp=ar[p][pk2];
                       // cout<<"tem="<<temp<<endl;
                        ar[p][pk2]=ar[p][ck2];
                       // cout<<"ar[p][pk2]="<<ar[p][pk2]<<endl;
                        ar[p][ck2]=temp;
                        //cout<<"ar[p][ck2]="<<ar[p][ck2]<<endl;


                    }


                }
            }
            break;
        }
        //cout<<"cout::::::"<<count<<endl;


            //cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
            int flag=1;
            for(int i=0;i<l;i++)
            {


                if(ar[i][0]!=flag)
                {
                    //cout<<"ar["<<i<<"][0]="<<ar[i][0]<<" flag="<<flag<<endl;
                    count++;
                    int c1=0,c2=0;
                    c1=i;
                    for(int j=0;j<l;j++)
                    {
                        if(ar[j][0]==flag)
                            c2=j;
                    }
                    int temp=0;
                    //cout<<"c1="<<c1<<" c2="<<c2<<endl;
                    for(int k=0;k<c;k++)
                    {
                   // cout<<"ar["<<c1<<"]["<<k<<"]="<<ar[c1][k]<<" ar["<<c2<<"][<<"<<k<<"]="<<ar[c2][k]<<endl;
                  // cout<<"ar["<<c1<<"]["<<k<<"]="<<ar[c1][k]<<"  ar["<<c2<<"]["<<k<<"]="<<ar[c2][k]<<endl;
                       temp=ar[c1][k];
                       //cout<<"temp="<<temp<<endl;
                       ar[c1][k]= ar[c2][k];
                      // cout<<"ar[c1][k]="<<ar[c1][k]<<endl;
                       ar[c2][k]=temp;
                       //cout<<"ar["<<c1<<"]["<<k<<"]="<<ar[c1][k]<<"  ar["<<c2<<"]["<<k<<"]="<<ar[c2][k]<<endl;
                    }



             }
             flag+=c;
            }


            int nn=1;
            int bb=0;
          for(int i=0;i<l;i++)
          {
              for(int j=0;j<c;j++)
              {
                 // cout<<"ar[i][j]="<<ar[i][j]<<endl;
                 if(ar[i][j]!=nn)
                 {
                     bb=1;
                     break;
                 }
                 else
                 {
                  nn++;
                 }
              }

          }
      if(bb==0)
      {
          cout<<count<<endl;
      }
      else
      {
          cout<<"*"<<endl;
      }


    }

    return 0;
}
/*
5 4
13 15 14 16
5 7 6 8
9 11 10 12
1 3 2 4
17 19 18 20
*/
