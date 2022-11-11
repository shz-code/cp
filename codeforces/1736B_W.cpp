// Problem: B. Playing with GCD //Wrong
// Contest: Codeforces Round #825 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1736/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: MATH (gcd,lcm)
// Problem Rating: 1200
  
 
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
	int n; cin>>n;
    int a[n],b[n+1];
	bool flag = true;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i == n-1) b[0] = a[i];
        //int sum = a[i] + b[n-i];
        b[n-i] = a[i];
    }
    for(int i=1; i<=n;i++)
    {
    	b[i] = b[i] + b[i-1];
    }
    for(int i=0;i<n;i++)
    {
    	cout<<b[i]<<" "<<b[i+1]<<" = ";
    	if(__gcd(b[i],b[i+1]) != a[n-i-1]) flag = false;
    	cout<<__gcd(b[i],b[i+1])<<endl;
    }
    cout<< (flag? "YES" : "NO") <<endl;
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