// Math
// Problem: https://www.codechef.com/DEC221D/problems/DIVBYK
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll unsigned long long
#define nl "\n"

void solve()
{
    int n,k;
    cin>>n>>k;
    ll a[n],ans=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ans = (ans*a[i])%k;
    }
    cout<<(ans==0?"YES":"NO")<<nl;
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