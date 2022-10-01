#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int arr[N][N];
int a[N][N];
int main()
{
    int n, row, col, t, val, sum = 0;
    cin >> n;
    row = n / 2;
    col = row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cin >> a[i][j];
            arr[i][j] = a[i][j] + arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }
    cout << endl;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << arr[c][d] - arr[a - 1][d] - arr[c][b - 1] + arr[a - 1][b - 1] << endl;
    }
    return 0;
}