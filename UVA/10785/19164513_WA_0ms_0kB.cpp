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
    con[20]='R';
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
         char a[n];
         char b[n];
         int a1=0,b1=0;
        // cout<<"n="<<n<<endl;
        for(int i=0;i<n;i++)
        {
            //cout<<"ss"<<endl;
           //cout<<"vowe[p]="<<vowel[p]<<endl;
            ar[i]=vowel[p];
            a[a1]=ar[i];
            a1++;
            p1++;
            i++;
            //cout<<"con[q]="<<con[q]<<endl;
            ar[i]=con[q];
            b[b1]=ar[i];
            b1++;
            q1++;
            if(p1==21)
            {
                p++;
                p1=0;
            }
            if(q1==5)
            {
                q++;
                q1=0;
            }
        //cout<<"p="<<p<<"   q="<<q<<endl;


        }
        sort(a,a+a1);
        sort(b,b+b1);
        int l=0,m=0;
        char mixt[n];
        for(int i=0;i<n;i++)
        {
            if(ar[i]=='A'||ar[i]=='E'||ar[i]=='I'||ar[i]=='O'||ar[i]=='U')
            {
                mixt[i]=a[l];
                l++;
            }
            else
            {
                mixt[i]=b[m];
                m++;
            }
        }
        cout<<"Case "<<cas<<": ";
        for(int i=0;i<n;i++)
        {
            cout<<mixt[i];
        }
        cout<<endl;
        cas++;

    }

    return 0;
}
