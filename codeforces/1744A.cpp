// Problem: A. Number Replacement
// Contest: Codeforces Round #828 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1744/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
	bool flag = true;
    vector<pair<int,char>> v;
    int n; cin>>n;
    int a[n];
    string s;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>s;
    for(int i=0;i<n;i++)
    {
        v.push_back({a[i],s[i]});
    }
    sort(v.begin(),v.end());
    for(auto it = v.begin(); it < v.end(); it++)
    {
    	auto nx = next(it,1);
        if( nx == v.end() ) continue;
        if((*it).first == (*nx).first && (*it).second != (*nx).second) flag = false;
    }
    cout<< (flag? "YES" : "NO") << endl;
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