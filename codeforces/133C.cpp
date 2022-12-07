// Topic: Implementation
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

string binary(int tmp)
{
	string res="";
	for(int i=7;i>=0;i--)
	{
		int k = tmp >> i;
		if(k & 1) res += '1';
		else res += '0';
	}
	return res;
}

int decimal(string &res)
{
	int cnt = 1,ans=0;
	for(int i=0;i<8;i++)
	{
		if(res[i] == '1') ans += cnt;
		cnt *= 2;
	}
	return ans;
}

void solve()
{
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		int tmp = (int)s[i];
		string res = binary(tmp);
		int prev;
		if(i == 0) prev = 0;
		int ans = decimal(res); 
		if(prev-ans < 0) cout<<256-ans+prev<<nl;
		else cout<<prev-ans<<nl;
		prev = ans;
	}
}

int main()
{
    //Faster Input Output
    FAST
    int q=1; //cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}