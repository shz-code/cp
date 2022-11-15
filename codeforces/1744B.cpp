// Problem: B. Even-Odd Increments
// Contest: Codeforces Round #828 (Div. 3)
// URL: https://codeforces.com/contest/1744/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Math
// Problem Rating: 800
  
 
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long

void solve()
{
    int n,q;
    cin>>n>>q;
    ll a[n],even=0,odd=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        (a[i]%2==0 ? even++ : odd++);
        sum += a[i];
    }
    while(q--)
    {
        int typ,x;
        cin>>typ>>x;
        if(typ == 0)
        {
            sum += (even*x);
            if(x%2 != 0)
            {
                odd += even;
                even = 0;
            }
        }
        else
        {
            sum += (odd*x);
            if(x%2 != 0)
            {
                even += odd;
                odd = 0;
            }
        }
        cout<<sum<<endl;
    }
}
int main()
{
    FAST
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}
