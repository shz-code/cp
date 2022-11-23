// Problem: A. Panoramix's Prediction
// Contest: Codeforces Beta Round #69 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/80/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Number Theory
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

#define FAST  ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl "\n"

const int MX = 50;
vector<bool> is_prime(MX,true);
set<int> prime;

void seive()
{
	for(int i = 2; i <= MX ; i++)
	{
		if(is_prime[i])
		{
			prime.insert(i);
			for(int j = i*i ; j <= MX; j += i)
			{
				is_prime[j] = false;
			}
		}
	}
}

void solve()
{
	int n,m;
	cin>>n>>m;
	auto next_prime = prime.upper_bound(n);
	if(next_prime == prime.end())
	{
		cout<<"NO"<<nl;
		return;
	}
	cout<<((*next_prime) == m? "YES" : "NO")<<nl;
}
int main()
{
	seive();
	// Faster Input Output
	FAST 
	int q=1;
	//cin >> q;
	while (q--)
	{
		solve();
	}
	return 0;
}