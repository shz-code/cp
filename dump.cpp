// Problem: B. Drinks
// Contest: Codeforces Round #126 (Div. 2)
// URL: https://codeforces.com/problemset/problem/200/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Math
// Rating: 800
  
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"
#define F first
#define S second

void solve()
{
	int n;
    cin>>n;
    double a[n];
    double sum=0.0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum += (double) a[i];
    }
    printf("%.12lf",sum/n);
}

int main()
{
    //Faster Input Output
    FAST
    int q=1; //cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}