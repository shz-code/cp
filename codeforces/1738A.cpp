//Codeforces
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n; cin>>n;
    int a[n]; // 0 -> fire & 1 -> frost
    ll b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<vector<ll>> v(2);
    for(int i=0;i<n;i++) v[a[i]].push_back(b[i]);
    for(int i=0;i<2;i++) sort(v[i].begin(),v[i].end());

    auto calc = [&]()
    {
        ll res = 0;
        if(v[0].size() == v[1].size())
        {
            res -= min(v[0].front(),v[1].front());
        }
        while(!v[0].empty() && !v[1].empty())
        {
            res += (v[1].back() * 2) + (v[0].back() * 2);
            v[0].pop_back();
            v[1].pop_back();
        }
        for(auto val : v[0]) res += val;
        for(auto val : v[1]) res += val;
        return res;
    };
    cout<<calc()<<endl;
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