// Problem: A. 2-3 Moves
// Contest:Educational Codeforces Round 133 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1716/A
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
	int x; cin>>x;
    if(x == 1) cout<<2<<nl;
    else if(x == 2) cout<<1<<nl;
    else if(x%3 == 0) cout<<x/3<<nl;
    else cout<<x/3+1<<nl;
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