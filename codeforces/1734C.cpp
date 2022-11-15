// Problem: C. Removing Smallest Multiples
// Contest: Codeforces Round #822 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1734/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Rating: 1200
  
 
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

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '0')
        {
            int k = i+1;
            sum += k;
            for(int j=k+(k-1);j<n;j+=k)
            {
                if(s[j] == '0')
                {
                    s[j] = '*';
                	sum += k;
                }
                else if(s[j] == '1') break;
            }
        }
        else if(s[i] == '*')
        {
            int k = i+1;
            for(int j=k+(k-1);j<n;j+=k)
            {
                if(s[j] == '0')
                {
                    s[j] = '*';
                	sum += k;
                }
                else if(s[j] == '1') break;
            }
        }
    }
    cout<<sum<<endl;
}

int main()
{
    // Faster Input Output
    FAST
    int q; cin>>q;
    while(q--)
    {
        solve();
    }
}
