// Problem: A. Maxmina
// Contest: Codeforces Global Round 23
// URL: https://codeforces.com/problemset/problem/1746/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: Greedy
// Problem Rating: 800
  
 
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
    int n,k; cin>>n>>k;
    bool flag = false;
    for(int i=0;i<n;i++) 
    {
        int x; cin>>x;
        if(x == 1) flag = true;
    }
    cout<< (flag? "YES" : "NO") <<endl;
    
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