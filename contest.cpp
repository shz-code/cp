#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n/2;i++)
    {
    	if(n%i==0) cnt++;
    }
    cout<<cnt;
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