#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
vector<bool> is_prime(N, true);
void sieve()
{
    is_prime[0] = is_prime[1] = false;
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
    if(is_prime[5]) cout<<"Prime";
    else cout<<"Not Prime";
    return 0;
}