// dust-7
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define nl "\n"
#define vall(v) v.begin(), v.end()

void code();

int main()
{
    int t = 1;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        code();
    }
    return 0;
}

void code()
{
    int n;
    cin>>n;
    if(n&1)
    {
        vector<pair<int,int>> ans;
        ans.push_back({1,n-1});
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
	            ans[0].first = (n/i);
	            ans[0].second = (n-(n/i));
	            break;
            }
        }
        cout<<ans[0].first<<" "<<ans[0].second<<nl;
    }
    else cout<<n/2<<" "<<n/2<<nl;
}