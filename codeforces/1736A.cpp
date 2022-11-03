//Codeforces
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,sum=0,ans=0;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++) 
    {
	    cin>>arr1[i];	
	    sum += arr1[i];
    }
    for(int i=0;i<n;i++)
    {
	    cin>>arr2[i];	
	    sum -= arr2[i];
    }
        for(int i=0;i<n;i++)
    {
	    ans += (arr1[i]^arr2[i]); // A X-OR B | 0^0=0 1^1=0 1^0=1 0^1=1
    }
    ans = min(ans,abs(sum)+1);
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