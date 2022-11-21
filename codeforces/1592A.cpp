// Problem: A. Gamer Hemose
// Contest: Codeforces Round #746 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1592/A
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
	int n,h,ans;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,greater<int>());
    int calc = a[0]+a[1];
    if(h % calc == 0) ans = 2*(h/calc);
    else if(h % calc <= a[0]) ans = 2*(h/calc)+1;    
    else ans = 2*(h/calc)+2;
    cout<<ans<<nl;
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