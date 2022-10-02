// Forward & Backward prefix sum array
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int forward_arr[N], backward_arr[N], arr[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        backward_arr[n+1] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            forward_arr[i] = __gcd(forward_arr[i - 1], arr[i]);
        }
        for (int i = n; i > 0; i--)
        {
            backward_arr[i] = __gcd( backward_arr[i + 1],arr[i]);
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << __gcd(forward_arr[l - 1], backward_arr[r + 1]) << endl;
        }
    }
    return 0;
}