// Topic: Implementation
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

int sum=0;
multiset<int> mp;
vector<int> digisum(180,0);

int digisuminit(int &n)
{
	int tmp = abs(n),sum=0;
	string s = to_string(tmp);
	for(int i=0;i<s.size();i++)
	{
		sum += (int) s[i] - '0';
	}
	digisum[sum]++;
	return sum;
}

void solve()
{
	char a;
	int n;
	cin>>a>>n;
	if(a == 'A')
	{
		mp.insert(n);
		sum++;
		digisuminit(n);
	}
	else if(a == 'D')
	{
		auto val = mp.find(n);
		if(val != mp.end())
		{
			mp.erase(val);
			sum--;
			int del = digisuminit(n);
			digisum[del] -= 2;
		}
	}
	else
	{
		cout<<digisum[n]<<nl;
		return;
	}
	cout<<sum<<nl;
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