// Problem: B. Permutation Value
// Contest: Educational Codeforces Round 137 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1743/B
// Memory Limit: 512 MB
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

void solve()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) a[i] = i+1;
    cout<<a[0]<<" "<<a[n-1]<< " ";
    for(int i=1;i<n-1;i++) cout<<a[i] <<" ";
    cout<<endl;
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