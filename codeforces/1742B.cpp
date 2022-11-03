//Codeforces
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n; cin>>n;
    bool flag = true;
    ll a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        if(a[i] == a[i-1]) 
        {
            flag = false;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    // Faster Input Output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}