// Problem: D. Challenging Valleys
// Contest: Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Implementation
// Rating: 1000
  
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
	int n,y=0,res = 0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
    	int x;
        cin>>x;
        if(y != x) v.push_back(x);
        y = x;
    }
    int sz = v.size();
    for(int i=0;i<sz;i++)
    {
        if(i == 0 && v[i] < v[i+1]) res++;
        else if(i == sz - 1 && v[sz-2] > v[sz-1]) res++;
        else if(v[i] < v[i-1] && v[i] < v[i+1]) res++;
    }
    cout<<(res < 2 ? "YES" : "NO")<<nl;
}

int main()
{
    //Faster Input Output
    FAST
    int q; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}