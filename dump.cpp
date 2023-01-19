// NumberTheory
// https://toph.co/p/sum-of-n-n
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define nl "\n"
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define pb push_back

void solve()
{
	int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char c; cin>>c;
            if(c>='a' && c<='z') a[i][j] = (c-'a')+1;
            else a[i][j] = (c-'A')+1;
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum += a[i][j];
        }
        cout<<sum<<nl;
        sum = 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum += a[j][i];
        }
        cout<<sum<<nl;
        sum = 0;
    }
    int x=0,y=0,tmp=n;;
    while(tmp--)
    {
        sum += a[x][y];
        x++;
        y++;
    }
    cout<<sum<<nl;
    tmp = n;
    x=0,y=n-1;
    sum = 0;
    while(tmp--)
    {
        sum += a[x][y];
        x++;
        y--;
    }
    cout<<sum<<nl;
    sum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum += a[i][j];
        }
    }
    cout<<sum<<nl;
}

int main()
{
    // Faster Input Output
    FAST 
    int q=1; //cin>>q;
    while (q--)
    {
        solve();
    }
    return 0;
}