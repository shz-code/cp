// Number Theory
// Problem: https://codeforces.com/problemset/problem/1766/D
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define pb push_back

const int MX = 1e7+123;
vector<bool> is_prime(MX,true);
vector<int> primes;

void sieve()
{
    for(ll i=2;i*i<=MX;i++)
    {
        if(is_prime[i])
        {
            primes.pb(i);
            for(ll j=i*i;j<=MX;j+=i) is_prime[j] = false;
        }
    }
}

void prime_fact(int k,auto &v)
{
    for(ll i=0;i<primes.size() and primes[i]*primes[i]<=k;i++)
    {
        if(k % primes[i] == 0)
        {
            while(k % primes[i] == 0)
            {
                k /= primes[i];
            }
            v.pb(primes[i]);
        }
    }
    if(k > 1) v.pb(k);
}

void solve()
{
	int a,b;
    cin>>a>>b;
    int gap = b-a;
    vector<int> factors;
    if(__gcd(a,b) != 1)
    {
        cout<<0<<nl;
        return;
    }
    prime_fact(gap,factors);
    if(factors.size() == 0)
    {
        cout<<-1<<nl;
        return;
    }
    ll ans = 1e15;
    for(auto val:factors)
    {
        ll tar = ((a/val)+1)*val;
        ans = min(tar-a,ans);
    }
    cout<<ans<<nl;
}

int main()
{
    sieve();
    //Faster Input Output
    FAST
    int q=1; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}