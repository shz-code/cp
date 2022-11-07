// Problem: B. BAN BAN
// Contest: Codeforces Round #832 (Div. 2)
// URL: https://codeforces.com/contest/1747/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
  
 
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    cout<<n/2 + n%2<<endl;
    int l = 1, r = 3*n;
    while(l < r)
    {
    	cout<<l<<" "<<r<<endl;
    	l += 3;
    	r -= 3;
    }
}

int main()
{
    int q; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}