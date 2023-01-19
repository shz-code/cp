// dust-7
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

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
    int n,m,k;
    cin>>n>>m>>k;
    int mx = 0;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        mx = max(mx,x);
    }
    if(mx > (n+k-1)/k) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
}