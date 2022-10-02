// Solve using prefix sum and hashing.
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e7 + 10;
ll arr[N], prefix[N];
int main()
{
    // Faster IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    while (m--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        arr[a] += k;
        arr[b + 1] -= k;
    }
    ll max = prefix[1];
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = arr[i] + prefix[i - 1];
        if (prefix[i] > max)
            max = prefix[i];
    }
    cout << max << endl;
    return 0;
}
