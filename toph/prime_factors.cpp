// Number Theory
// Problem: https://toph.co/p/prime-factors
#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);  cin.tie(NULL);
#define ll long long
#define nl "\n"

const int MX = 1e6+123;
vector<bool> is_prime(MX,true);
vector<int> primes;
vector<pair<int,int>> prime_factors;

void sieve()
{
    for(int i=2;i*i<=MX;i++)
    {
        primes.push_back(i);
        if(is_prime[i])
        {
            for(int j=i*i;j<=MX;j+=i) is_prime[j] = false;
        }
    }
}

void prime_factor(int n)
{
    for(int i=0; i<primes.size() and primes[i]*primes[i]<=n;i++)
    {
    	if(n % primes[i] == 0)
    	{
	    	int cnt=0;
	        while(n % primes[i] == 0)
	        {
	            n /= primes[i];
	            cnt++;
	        }
	        prime_factors.push_back({primes[i],cnt});
        }
    }
    if(n>=1 && n != 1) prime_factors.push_back({n,1});
}

void solve()
{
    int n;
    cin>>n;
    prime_factor(n);
    cout<<n<<" = ";
    for(int i=0;i<prime_factors.size();i++)
    {
    	if(prime_factors[i].first == 1) continue;
        cout<<prime_factors[i].first<<" ";
        cout<<"^ "<<prime_factors[i].second<<" ";
        if(i != prime_factors.size()-1)cout<<"* ";
    }
}

int main()
{
    sieve();
    // Faster Input Output
    FAST 
    int q=1; //cin>>q;
    while (q--)
    {
        solve();
    }
    return 0;
}