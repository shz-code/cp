// Problem: Permutations
// URL: https://cses.fi/problemset/task/1070
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Topic: Implementation
  
 
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 2;
    cin >> n;
    int mid = n / 2;
    if (n > 1 && n < 4)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    for (int i = 0; i < mid; i++)
    {
        cout << cnt << " ";
        if (cnt + 2 > n)
            cnt++;
        else
            cnt += 2;
    }
    cnt = 1;
    for (int i = mid; i < n; i++)
    {
        cout << cnt << " ";
        cnt += 2;
    }
    return 0;
}