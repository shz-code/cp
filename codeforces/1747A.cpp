// Problem: A. Two Groups
// Contest: Codeforces Round #832 (Div. 2)
// URL: https://codeforces.com/contest/1747/problem/0
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

void solve()
{
    int n; cin>>n;
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        (x < 0 ? sum1-=x : sum2+=x);
    }
    cout<<abs(sum1-sum2)<<endl;
}

int main()
{
    int q; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}