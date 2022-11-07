// Problem: B. Queue at the School
// Contest: Codeforces Round #163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
  
 
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
    string s;
    int n,k; 
    cin>>n>>k;
    cin>>s;
    while(k--)
    {
        for (int i = 0; i < n; i++)
        {
            if(i != n-1)
            {
                if(s[i] == 'B' && s[i+1] == 'G')
                {
                    swap(s[i],s[i+1]);
                    i++;
                }   
            }
        }
    }
    cout<<s<<endl;
    return 0;
}