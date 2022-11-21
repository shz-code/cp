#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> is_prime(N, true);
vector<int> prime;
vector<pair<int,int>> prime_factors;

void sieve()
{
    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i] == true)
        {
            prime.push_back(i);
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}

void prime_factorization(int n)
{
    for(int i=0; i<prime.size() and prime[i]*prime[i]<=n;i++)
    {
    	if(n % prime[i] == 0)
    	{
	    	int cnt=0;
	        while(n % prime[i] == 0)
	        {
	            n /= prime[i];
	            cnt++;
	        }
	        prime_factors.push_back({prime[i],cnt});
        }
    }
    if(n>=1) prime_factors.push_back({n,1});
}
int main()
{
    sieve();
    int n; cin>>n;
    prime_factorization(n);
    for(auto val:prime_factors) cout<<val.first<<" "<<val.second<<endl;
    return 0;
}