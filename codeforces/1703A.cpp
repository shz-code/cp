// Problem: A. YES or YES?
// Contest: Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1703/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: String
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

#define FAST  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
	int n;
	cin>>n;
	while(n--)
	{
		char c;
		string str="";
		for(int i=0;i<3;i++)
		{
			cin>>c;
			c = tolower(c);
			str += c;
		}
		if(str == "yes") cout<<"YES"<<nl;
		else cout<<"NO"<<nl;
	}
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