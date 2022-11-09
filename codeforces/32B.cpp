// Problem: B. Borze
// Contest: Codeforces Beta Round #32 (Div. 2, Codeforces format)
// URL: https://codeforces.com/problemset/problem/32/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Implementation
  
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        Toph Handle : shz_code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    //Faster Input Output
    FAST
    string s; cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '-' && s[i+1] == '-')
        {
            cout<<2;
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '.')
        {
            cout<<1;
            i++;
        }
        else if(s[i] == '.')
        {
            cout<<0;
        }
    }
    return 0;
}