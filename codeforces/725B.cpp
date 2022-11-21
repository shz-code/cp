// Problem: B. Food on the Plane
// Contest: Canada Cup 2016
// URL: https://codeforces.com/problemset/problem/725/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Implementation
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
#define nl "\n"

const string a="fedabc";
ll ans;

void seat_calc(int seat)
{
    for(int i = 0; i<a.size();i++)
    {
        if(seat == a[i]) ans += i+1;
    }
}

void solve()
{
	string s,str;
    cin>>s;
    ll row;
    char seat;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] >= '0' & s[i] <= '9') str += s[i];
        else seat = s[i];
    }
    row = stoll(str);
    if(row == 1 || row == 3) 
    {
        seat_calc(seat);
    }
    else if(row == 2 || row == 4)
    {
    	ans += 7;
        seat_calc(seat);
    }
    else{
        ll res;
        if(row % 2 != 0)
        {
            res = row/2;
            if( res % 2 == 0)
            {
                ans = (res/2) * 16;
                seat_calc(seat);
            }
            else
            {
            	ans += 14;
                ans += (res/2 - 1) * 16 + 2;
                seat_calc(seat);
            }
        }
        else
        {
            res = row/2 - 1;
            if( res % 2 == 0)
            {
                ans = (res/2) * 16 + 7;
                seat_calc(seat);
            }
            else
            {
                ans += 14;
                ans += (res/2-1) * 16 + 9;
                seat_calc(seat);
            }
        }
    }
    cout<<ans;
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