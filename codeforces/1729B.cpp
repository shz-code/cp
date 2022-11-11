// Problem: B. Decode String
// Contest: Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1729/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);


void solve()
{
	int n;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		string str = "";
		if(s[i+2] == '0' && s[i+3] != '0')
		{
			str += s[i];
			str += s[i+1];
			int data = stoi(str);
			char c = 96 + data;
			cout<<c;
			i += 2;
		}
		else
		{
			char c = (s[i]-48)+96;
			cout<<c;
		}
	}
	cout<<endl;
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