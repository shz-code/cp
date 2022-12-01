// Problem: A. Insomnia cure
// Contest: Codeforces Round #105 (Div. 2)
// URL: https://codeforces.com/problemset/problem/148/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Implementation
// Rating: 800
  
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
#define ll long long
#define nl "\n"

const int MX = 1e5+123;
vector<bool> harm(MX,false);

void solve()
{
    int t,n=4,cnt=0;
	unordered_set<int> s;
    while(n--)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    cin>>t;
    if(s.count(1))
    {
        cout<<t;
        return;
    }
    for(int i=2;i<=t;i++)
    {
        if(s.count(i))
        {
            for(int j=i;j<=t;j+=i) harm[j] = true;
        }
    }
    for(int i=1;i<=t;i++)
    {
    	if(!harm[i]) cnt++;
    }
    cout<<t-cnt;
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