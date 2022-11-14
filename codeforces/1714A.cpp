// Problem: A. Everyone Loves to Sleep
// Contest: Codeforces Round #811 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1714/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Implementation
// Problem Rating: 900
  
 
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,h1,m1,ans=1e5;
    cin>>n>>h1>>m1;
    int total = 60 * h1 + m1;
    for(int i=0;i<n;i++)
    {
        int h2,m2;
        cin>>h2>>m2;
        int tmp = (60 * h2 + m2) - total;
        if(tmp < 0) tmp += 24 * 60;
        ans = min(ans, tmp);
    }
    cout<<ans/60<<" "<<ans%60<<endl;
}
int main()
{
    int q; cin>>q;
    while(q--)
    {
        solve();
    }
}
