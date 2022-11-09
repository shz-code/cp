// Problem: B. T-primes
// Contest: Codeforces Round #142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 1e7 + 10;
vector<bool> is_prime(N, true);

void sieve()
{
    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i] == true)
        {
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}

int main()
{
    sieve();
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
    {
    	double x = floor(sqrt(a[i]));
    	if(is_prime[x] && x*x == a[i] && a[i] != 1) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }
    return 0;
}