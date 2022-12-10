// Implementaion
// Problem: https://codeforces.com/contest/919/problem/C
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
    int n,m,k,ans=0;
    cin>>n>>m>>k;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        int seat = 0;
        for(int j=0;j<m;j++)
        {
            if(a[i][j] == '.') seat++;
            else seat = 0;
            if(seat >= k) ans++;
        }
    }
    if(k == 1)
    {
    	cout<<ans<<nl;
    	return;
    }
    for(int i=0;i<m;i++)
    {
        int seat = 0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i] == '.') seat++;
            else seat = 0;
            if(seat >= k) ans++;
        }
    }
    cout<<ans<<nl;
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