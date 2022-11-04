// Problem: B. BAN BAN (Wrong)
// Contest: Codeforces Round #832 (Div. 2)
// URL: https://codeforces.com/contest/1747/problem/B
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
    string s="BAN";
    int n; cin>>n;
    int t_c=0,i=2;
    vector<pair<int,int>> v;
    if(n % 2 == 0)
    {
        while(n != 0)
        {
        	v.push_back({i,i+4});
            n -= 2;
            i += 6;
            t_c++;
        }
    }
    else
    {
        if(n == 1)
        {
            t_c++;
            v.push_back({i,i+1});
        }
        else
        {
            while(n != 1)
            {
                v.push_back({i,i+4});
                n -= 2;
                i += 6;
                t_c++;
            }
            t_c++;
            v.push_back({i,i+1});
        }
    }
    cout<<t_c<<endl;
    for(auto val : v) cout<<val.first<<" "<<val.second<<endl;
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