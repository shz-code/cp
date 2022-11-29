// Problem: Missing Number
// URL: https://cses.fi/problemset/task/1083
// Memory Limit: 512 MB
// Time Limit: 1000 ms
 
 
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CSES Handle : shz-code                           ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

const int MX = 2e5+123;
vector<int> v(MX,0);

void solve()
{
	ll n;
    cin>>n;
    v[0] = 1;
    for(int i=1;i<n;i++)
    {
        int x; cin>>x;
        v[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i] == 0)
        {
            cout<<i;
            break;
        }
    }
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