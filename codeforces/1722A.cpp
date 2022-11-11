// Problem: A. Spell Check
// Contest: Codeforces Round #817 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1722/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: String
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
	int n;
	string s;
	cin>>n>>s;
    vector<char> v;
    bool flag = true;
    if(n == 5)
    {
        for(int i=0;i<n;i++)
        {
            v.push_back(s[i]);
        }
        sort(v.begin(),v.end());
        if(v[0] != 'T' || v[1] != 'i' || v[2] != 'm' || v[3] != 'r' || v[4] != 'u') flag = false;
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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