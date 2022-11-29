#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
	int n;
    cin>>n;
    int a[n];
    if(n & 1) 
    {
        cout<<-1;
        return;
    }
    for(int i=0;i<n;i++) a[i] = i + 1;
    for(int i=0;i<n-1;i+=2)
    {
        swap(a[i],a[i+1]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
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