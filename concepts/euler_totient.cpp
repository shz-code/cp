//For calculationg total coprimes
#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> is_prime(N, true);
vector<int> prime;

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

int euler(int n)
{
	int res;
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
	        res = res - (res / prime[i]);
        }
    }
    if(n>=1) res = res - (res / n);
    return res;
}
int main()
{
    sieve();
    int n; cin>>n;
    cout<<euler(n);
    return 0;
}