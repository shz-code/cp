// String
// Problem: https://www.codechef.com/DEC221D/problems/XORMAX
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
    string a,b,c="";
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    int n = a.size();
    for(int i=0;i<n;i++)
    {
    	int tmp = a[i] - '0';
    	int tmp1 = b[i] - '0';
    	c += to_string(tmp^tmp1);
    }
    sort(c.rbegin(),c.rend());
    cout<<c<<nl;
}
int main()
{
    //Faster Input Output
    FAST
    int q=1; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}