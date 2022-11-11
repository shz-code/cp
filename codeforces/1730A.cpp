// Problem: A. Planets
// Contest: Codeforces Round #823 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1730/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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


void solve()
{
	int n,k; cin>>n>>k;
    int a[n],ans=0;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
	for(auto val:m)
	{
		if(val.second >= k) ans += k;
		else if(val.second < k) ans += val.second;
		else ans++;
	}
	cout<<ans<<endl;
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