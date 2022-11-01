//Codeforces
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,ans=1e9+5;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=2;i<n;i++)
    {
        ans = min(ans, abs(arr[i]-arr[i-2]));
    }
    cout<<ans<<endl;
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