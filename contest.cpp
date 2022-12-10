#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll unsigned long long
#define nl "\n"

void solve()
{
    int n;
    cin>>n;
    int a[8];
    for(int i=1;i<=7;i++) cin>>a[i];
    while(n > 0)
    {
	    for(int i=1;i<=7;i++)
	    {
	        n -= a[i];
	        if(n <= 0)
	        {
	        	cout<<i<<nl;
	        	break;
	        }
	    }
	}
}
int main()
{
    //Faster Input Output
    FAST
    int q=1; //cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}