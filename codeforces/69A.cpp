// Problem: A. Young Physicist
// Contest: 
// URL: https://codeforces.com/problemset/problem/69/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
  
 
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
    int q; cin>>q;
    int x=0,y=0,z=0;
    while(q--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        x += a;
        y += b;
        z += c;
    }
    if(!x && !y && !z) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}