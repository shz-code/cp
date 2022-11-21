// Problem: Be Like Hasib
// URL: https://toph.co/p/be-like-hasib
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Topic: Binary Search
  
 
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        Toph Handle : shz_code                           ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
	ll n,t;
    cin>>n>>t;
    ll low=1,high=n,cnt=0;;
    while( low < high )
    {
        cnt++;
        ll mid = (high+low)/2;
        if(t > mid)
        {
            low = mid + 1;
        }
        else high = mid;
    }
    cout<<cnt<<nl;
}
int main()
{
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