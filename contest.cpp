#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
	int n;
	cin>>n;
	if(n & 1)
	{
		for(int i=0;i<n;i++) cout<<"2 ";
	}
	else
	{
		cout<<"1 3 ";
		for(int i=2;i<n;i++) cout<<"2 ";
	}
	cout<<nl;
}

int main()
{
    //Faster Input Output
    FAST
    int q; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}