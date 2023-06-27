// https://codeforces.com/problemset/problem/1840/A
#include<bits/stdc++.h>
using namespace std;

#define LANCER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define nl "\n"
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define pb push_back
#define no cout<<"NO"<<nl
#define yes cout<<"YES"<<nl

void solve()
{
	int n;
	string s;
	cin>>n>>s;
	string ans = "";
	for(int i=0;i<n;i++)
	{
		char c = s[i];
		int skip=0;
		for(int j=i+1;j<n;j++)	
		{
			skip++;
			if(s[j] == c)
			{
				ans += c;
				i += skip;
				break;
			}
		}
	}
	cout<<ans<<nl;
}

int main()
{
    // Faster Input Output
    LANCER
    int q = 1; cin>>q;
    for (int i=1;i<=q;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}
