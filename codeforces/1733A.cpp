// Problem: A. Consecutive Sum
// Contest: Codeforces Round #821 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1733/A
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
#define ll long long

void solve()
{
    int n,k; cin>>n>>k;
    ll sum=0,arr[k+1];
    
    for (int i=0;i<k+1;i++) arr[i]=0;
    
    for(int i=0;i<n;i++) 
    {
        ll num; cin>>num;
        arr[i%k] = max(arr[i%k],num);
    }
    
    for(int i=0; i<k; i++) sum += arr[i];
    cout<<sum<<endl;
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