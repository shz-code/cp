// Problem: A. Yes-Yes?
// Contest: Codeforces Round #834 (Div. 3)
// URL: https://codeforces.com/contest/1759/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: String
// Rating: 800
 
 
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl "\n"

void solve()
{
	string s;
	cin>>s;
	bool flag = true;
	if(s.size() == 1)
	{
		if(s[0] == 'Y' || s[0] == 'e' || s[0] == 's') cout<<"YES"<<nl;
		else cout<<"NO"<<nl;
		return;
	}
	for(int i=0;i<s.size()-1;i++)
	{
		if(s[i] == 'Y' || s[i] == 'e' || s[i] =='s')
		{
			if(s[i] == 'Y' && s[i+1] != 'e' || s[i] == 'e' && s[i+1] != 's' || s[i] == 's' && s[i+1] != 'Y')
			{
				flag = false;
				break;
			}
		}
		else
		{
			flag = false;
			break;
		}
	}
	cout<<(flag?"YES":"NO")<<nl;
}
int main()
{
	// Faster Input Output
	FAST 
	int q;
	cin >> q;
	while (q--)
	{
		solve();
	}
	return 0;
}