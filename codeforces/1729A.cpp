// Problem: A. Two Elevators
// Contest: Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1729/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Implementation
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
	int a,b,c;
    cin>>a>>b>>c;
    if(a == 1)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        if(a-1 > abs(b-c)+c-1) cout<<2<<endl;
        else if(a-1 < abs(b-c)+c-1) cout<<1<<endl;
        else cout<<3<<endl;
    }
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