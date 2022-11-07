// Problem: B. Maximum Substring
// Contest: CodeTON Round 3 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/contest/1750/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
 
 
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
 
const int N = 2e5+7;
char a[N];
void solve()
{
    int n; cin>>n;
    ll one=0,one_f=0,zero_f=0,zero=0,res=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] == '1')
        {
        	zero_f = 0;
        	one_f++;
        	one++;
        	res = max(res,one_f*one_f);
        }
        else
        {
        	one_f = 0;
        	zero_f++;
        	zero++;
        	res = max(res,zero_f*zero_f);
        }
    }
    res = max(res, one*zero);
    cout<<res<<endl;
}
 
int main()
{
    // Faster Input Output
    FAST
    int q; cin>>q;
    while(q--)
    {
        solve();
    }
}