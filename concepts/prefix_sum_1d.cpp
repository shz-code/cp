#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int arr[N];
int main()
{
    int n, t, val, sum = 0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin >> val;
        sum += val;
        arr[i] = sum;
    }
    cin >> t;
    while (t--)
    {
        int l,r;
        cin>>l>>r;
        cout<<arr[r]-arr[l-1]<<endl;
    }
    return 0;
}