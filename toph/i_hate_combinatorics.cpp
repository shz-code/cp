// Problem: I Hate Combinatorics!
// URL: https://toph.co/p/i-hate-combinatorics
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Topic: DP
  
 
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        Toph Handle : shz_code                           ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

const int MX = 1e6+123;
const int M = 1e9+7;
vector<int> v(MX);

void pre_calc()
{
	v[0] = v[1] = 1;
	for(int i=2;i<=MX;i++)
	{
		 v[i] = (v[i-1]+v[i-2])%M;
		 // v[i+1] += v[i];
		 // v[i+2] += v[i];		 
	}
}

void solve()
{
	int n;
	cin>>n;
	cout<<v[n-1]<<nl;
}
int main()
{
	//Faster Input Output
    FAST
    pre_calc();
	int q;
	cin >> q;
	while (q--)
	{
		solve();
	}
}