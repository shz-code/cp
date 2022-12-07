// Implementation
// Problem: https://codeforces.com/gym/101532/problem/B

#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
	int n,m;
	scanf("%d%d", &n, &m);
	int a[n],ind=0;
	bool found = true;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(found and a[i] != -1)
		{
			ind = i;
			found = false;
		}
	}
	for(int i=ind-1;i>=0;i--)
	{
		a[i] = (a[i+1]-1)%m;
		if(a[i] < 0) a[i] +=m;
	}
	for(int i=ind+1;i<n;i++)
	{
		a[i] = (a[i-1]+1)%m;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main()
{
    //Faster Input Output
    FAST
    int q=1; scanf("%d",&q);
    while(q--)
    {
        solve();
    }
    return 0;
}