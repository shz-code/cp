// Problem: A. Fox And Snake
// Contest: Codeforces Round #290 (Div. 2)
// URL: https://codeforces.com/problemset/problem/510/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Implementation
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
#define ll long long
#define nl "\n"

void solve()
{
	int n,m,cnt=2; cin>>n>>m;
    for(int i=0;i<n;i++)
    {
	    if(i%2==0) for(int i=0;i<m;i++) cout<<"#";
	    else if(cnt%2==0)
	    {
	    	for(int j=0;j<m;j++) 
	    	{
	    		if(j==m-1) cout<<"#";
	    		else cout<<".";
	    	}
	    	cnt++;
	    }
	    else
	    {
	    	for(int j=0;j<m;j++) 
	    	{
	    		if(j==0) cout<<"#";
	    		else cout<<".";
	    	}
	    	cnt++;
	    }
        cout<<nl;
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