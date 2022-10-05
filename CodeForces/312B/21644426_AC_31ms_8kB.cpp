#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%.10f",(float)(a*d)/(a*d+b*c-a*c));
	return 0;
}
