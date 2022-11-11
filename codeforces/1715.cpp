// Problem: A. Crossmarket
// Contest: Codeforces Round #816 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1715/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Greedy
// Problem Rating: 800
  
 
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
	int x,y; cin>>x>>y;
	if(x == 1 && y == 1) cout<<0<<nl;
	else if(x>=y) cout<<x-1+y-1+y<<nl;
	else cout<<y-1+x-1+x<<nl;
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