//Kadane Algorithm
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
	int n;
    cin>>n;
    int a[n];
    ll sum=0,mx=-1e9;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum += a[i];
        mx= max(mx,sum);
        if(sum<0) sum=0;
    }
}
int main()
{
	// Faster Input Output
	FAST 
	int q=1;
	//cin >> q;
	while (q--)
	{
		solve();
	}
	return 0;
}