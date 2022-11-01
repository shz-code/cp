//Codeforces
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<bool> is_prime(N, true);
vector<int> prime;
void sieve()
{
    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i] == true)
        {
            prime.push_back(i);
            for (int j = i * i; j <= N; j += i) is_prime[j] = false;
        }
    }
}
void solve()
{
    int n;
    cin>>n;
    for (int i = 0; ; i++)
    {
        int temp = n+prime[i];
        if(!is_prime[temp])
        {
            cout<<prime[i]<<endl;
            break;
        }
    }
    
}

int main()
{
    // Faster Input Output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}