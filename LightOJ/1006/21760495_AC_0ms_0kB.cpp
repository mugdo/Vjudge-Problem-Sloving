#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f;
int ar[100100];
long long fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    ar[0]=a;
    ar[1]=b;
    ar[2]=c;
    ar[3]=d;
    ar[4]=e;
    ar[5]=f;
    ar[n-1]=fn(n-1)%10000007;
    return( ar[n-1] + ar[n-2] %10000007+ ar[n-3] %10000007+ ar[n-4]%10000007+ ar[n-5] %10000007+ ar[n-6]%10000007)%10000007;
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    //cout<<"sss";
    while( cases-- ) {
            memset(ar,0,sizeof(ar));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
