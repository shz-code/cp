// https://codeforces.com/problemset/problem/1800/A
#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define nl "\n"
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define pb push_back

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		char tmp = tolower(s[i]);
		s[i] = tmp;
	}
	s.erase(unique(s.begin(), s.end()), s.end());
	if(s == "meow")
	{
		cout<<"YES"<<nl;
	}
	else cout<<"NO"<<nl;
}

int main()
{
    // Faster Input Output
    FAST 
    int q = 1; cin>>q;
    for (int i=1;i<=q;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}