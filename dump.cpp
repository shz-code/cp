#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
	int a,b;
	cin>>a>>b;
	int tmp = (a+b)>>1;
	if(tmp%2==0) cout<<"Sadia will be happy."<<nl;
	else cout<<"Oops!"<<nl;
}

int main()
{
    //Faster Input Output
    FAST
    int q=1; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}