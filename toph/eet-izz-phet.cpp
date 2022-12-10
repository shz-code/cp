// Problem: https://toph.co/p/eet-izz-phet
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"
#define pi 3.14159

void solve()
{
    int n;
    cin>>n;
    unordered_set<ll> s;
    while(n--)
    {
        string x;
        cin>>x;
        ll hash = 1;
        for(int i=0;i<x.size();i++)
        {
            hash = (hash * x[i]-'a'+i);
        }
        s.insert(hash);
    }
    int m;
    cin>>m;
    while(m--)
    {
        string z;
        cin>>z;
        ll hash = 1;
        for(int i=0;i<z.size();i++)
        {
            hash = (hash * z[i]-'a'+i);
        }
        if(s.count(hash)) cout<<"yes"<<nl;
        else cout<<"no"<<nl;
    }

}
int main()
{
    //Faster Input Output
    FAST
    int q=1; //cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}