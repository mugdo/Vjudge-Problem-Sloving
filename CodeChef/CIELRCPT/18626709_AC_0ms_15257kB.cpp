#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int p;
        cin>>p;
        int k=0;
        int flag=0;
        while(p>=0)
            {
                //cout<<"k="<<k<<endl;
                if(p>=2048&&p>1024&&p>512&&p>256&&p>128&&p>64&&p>32&&p>16&&p>8&&p>4&&p>2&&p>1)
                {
                    k+=2048;
                    p-=2048;
                    flag++;
                }
                else if(p<2048&&p>=1024&&p>512&&p>256&&p>128&&p>64&&p>32&&p>16&&p>8&&p>4&&p>2&&p>1)
                {
                    k+=1024;
                     p-=1024;
                    flag++;
                }
                else if(p<1024&&p>=512&&p>256&&p>128&&p>64&&p>32&&p>16&&p>8&&p>4&&p>2&&p>1)
                {
                    k+=512;
                     p-=512;
                    flag++;
                }
                else if(p<512&&p>=256&&p>128&&p>64&&p>32&&p>16&&p>8&&p>4&&p>2&&p>1)
                {
                    k+=256;
                     p-=256;
                    flag++;
                }
                else if(p<256&&p>=128&&p>64&&p>32&&p>16&&p>8&&p>4&&p>2&&p>1)
                {
                    k+=128;
                     p-=128;
                    flag++;
                }
                else  if(p<128&&p>=64&&p>32&&p>16&&p>8&&p>4&&p>2&&p>1)
                {
                    k+=64;
                     p-=64;
                    flag++;
                }
                else if(p<64&&p>=32&&p>16&&p>8&&p>4&&p>2&&p>1)
                {
                    k+=32;
                     p-=32;
                    flag++;
                }
                else  if(p<32&&p>=16&&p>8&&p>4&&p>2&&p>1)
                {
                    k+=16;
                     p-=16;
                    flag++;
                }
                else  if(p<16&&p>=8&&p>4&&p>2&&p>1)
                {
                    k+=8;
                    p-=8;
                    flag++;
                }
                else  if(p<8&&p>=4&&p>2&&p>1)
                {
                   k+=4;
                   p-=4;
                   flag++;
                }
                else if(p<4&&p>=2&&p>1)
                {
                   k+=2;
                   p-=2;
                   flag++;
                }
                else{
                    k+=1;
                    p-=1;
                    flag++;
                }

                if(p==0)
                {
                    break;
                }
                //cout<<"k="<<k<<endl;

        }
        cout<<flag<<endl;



    }
    return 0;
}
