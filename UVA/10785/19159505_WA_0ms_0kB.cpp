#include<bits/stdc++.h>
using namespace std;
int main()
{
    char vowel[5];
    vowel[0]='A';
    vowel[1]='U';
    vowel[2]='E';
    vowel[3]='O';
    vowel[4]='I';
    char con[21];
    con[0]='J';
    con[1]='S';
    con[2]='B';
    con[3]='K';
    con[4]='T';
    con[5]='C';
    con[6]='L';
    con[7]='D';
    con[8]='M';
    con[9]='V';
    con[10]='N';
    con[11]='W';
    con[12]='F';
    con[13]='X';
    con[14]='G';
    con[15]='P';
    con[16]='Y';
    con[17]='H';
    con[18]='Q';
    con[19]='Z';
    con[10]='R';
    int n;

    int t;
    cin>>t;
    int cas=1;
    for(int T=0;T<t;T++)
    {
        // t--;
        //cout<<"t="<<t<<endl;
          cin>>n;
          char ar[n];
         int p=0,q=0;
         int p1=0,q1=0;
        // cout<<"n="<<n<<endl;
        for(int i=0;i<n;i++)
        {
            //cout<<"ss"<<endl;
           //cout<<"vowe[p]="<<vowel[p]<<endl;
            ar[i]=vowel[p];
            p1++;
            i++;
            //cout<<"con[q]="<<con[q]<<endl;
            ar[i]=con[q];
            q1++;
            if(p1==5)
            {
                p++;
                p1=0;
            }
            if(q==21)
            {
                q++;
                q1=0;
            }


        }
        cout<<"Case "<<cas<<": ";
        for(int i=0;i<n;i++)
        {
            cout<<ar[i];
        }
        cout<<endl;
        cas++;

    }

    return 0;
}
