// Problem: A. Array with Odd Sum
// Contest:  Codeforces Round #617 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1296/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Math
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
	int n; cin>>n;
	int a[n],ec=0,oc=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] % 2 == 0) ec++;
        else oc++;
        sum += a[i];
    }
    if(sum % 2 != 0) cout<<"YES"<<nl;
    else 
    {
        if(ec > 0 && oc > 0) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
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