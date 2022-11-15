// Problem: C. Traffic Light
// Contest: Codeforces Round #828 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1744/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Implementation
// Problem Rating: 1000
  
 
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
	int n;
	string  res="",tmp="";
	char t;
	ll sum = 0,ans=0;
	cin>>n>>t;
	char s[n];
	bool flag = true,counter=false;;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		res += s[i];
		if(s[i] != 'g' && flag)
		{
			tmp += s[i];
		}
		else if(s[i] == 'g') flag = false;
	}
	if(t == 'g')
	{
		cout<<0<<nl;
		return;
	}
	if(res[n-1] != 'g') res += tmp + 'g';
	for(int i=0;i<res.size();i++)
	{
		if(counter) sum++;
		
		if(res[i] == t && !counter)
		{
			counter = true;
		}
		else if(res[i] == 'g')
		{
			counter = false;
			ans = max(ans,sum);
			sum = 0;
		}
	}
	cout<<ans<<nl;
}
int main()
{
	//Faster Input Output
    FAST
	int q;
	cin >> q;
	while (q--)
	{
		solve();
	}
	return 0;
}