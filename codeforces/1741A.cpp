//Codeforces
#include <bits/stdc++.h>
using namespace std;

#define sz(v) (int)v.size()

void solve()
{
    string l,r;
    char s_l,s_r;
    cin>>l>>r;
    s_l = l.back();
    s_r = r.back();
    if(s_l == s_r)
    {
        if(sz(l) == sz(r)) cout<<"="<<endl;
        else if(s_l == 'S') cout<< (sz(l) > sz(r) ? "<" : ">") <<endl;
        else if(s_l == 'L') cout<< (sz(l) > sz(r) ? ">" : "<") <<endl;
    } 
    else cout<<(s_l < s_r ? '>' : '<')<<endl;
}

int main()
{
    // Faster Input Output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}