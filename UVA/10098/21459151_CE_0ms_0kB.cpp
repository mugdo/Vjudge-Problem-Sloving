#include<bits/stdc++.h>
using namespace std;
void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
permute(char *a, int l, int r)
{
	int i;
	if (l == r)
		cout<<a<<endl;
	else
	{
		for (i = l; i <= r; i++)
		{
			swap((a+l), (a+i));
			permute(a, l+1, r);
			swap((a+l), (a+i)); //backtrack
		}
	}

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char str[10];
        cin>>str;
        int n = strlen(str);
        permute(str, 0, n-1);
        //cout<<endl;

    }
    return 0;
}