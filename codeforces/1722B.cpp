// Problem: B. Colourblindness
// Contest: Codeforces Round #817 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1722/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Topic: String
// Problem Rating: 800
  
 
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


void solve()
{
	int n; cin>>n;
    char a[2][n];
    bool flag = true;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j] == 'R' && a[i+1][j] != 'R' && i==0)
            {
            	flag = false;
            }
            else if(a[i][j] == 'R' && a[i-1][j] != 'R' && i==1)
            {
            	flag = false;
            }
        }
    }
    cout<< (flag ? "YES" : "NO") <<endl;
}
int main()
{
    //Faster Input Output
    FAST
    int q; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}