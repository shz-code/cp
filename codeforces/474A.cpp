// Problem: A. Keyboard
// Contest: Codeforces Round #271 (Div. 2)
// URL: https://codeforces.com/contest/474/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Implementation
// Rating: 900
  
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

void solve()
{
	char c;
    string s, pattern="qwertyuiopasdfghjkl;zxcvbnm,./";;
    cin>>c>>s;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<pattern.size();j++)
        {
            if(c == 'R')
            {
                if(s[i] == pattern[j]) cout<<pattern[j-1];
            }
            else  if(s[i] == pattern[j]) cout<<pattern[j+1];
        }
    }
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