// https://toph.co/p/sudden-tour
#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define nl "\n"
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define pb push_back

void solve()
{
    int n,c;
    cin>>n>>c;
    ll a[n],b[n],cnt=0;
    int tmp = n;
    while(tmp--) 
    {
        ll x,y;
        cin>>x>>y;
        a[cnt] = x;
        b[cnt] = y;
        cnt++;
    }
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        ll sum = a[i];
        if(sum > c) continue;
        ll fun = b[i];
        for(int j=i+1;j<n;j++)
        {
            if(sum + a[j] <= c)
            {
                fun += b[j];
                sum += a[j];
            }
        }
        ans = max(ans,fun);
    }
    cout<<ans<<nl;
}

int main()
{
    // Faster Input Output
    FAST 
    int q = 1; cin>>q;
    for (int i=1;i<=q;i++)
    {
        cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}