// Problem: A. Beautiful Year
// Contest: Codeforces Round #166 (Div. 2)
// URL: https://codeforces.com/problemset/problem/271/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Topic: Brute Force
  
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
    int n; cin>>n;
    while(1)
    {
        n++;
        bool flag = true;
        string s = to_string(n);
        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
            	if(s[i] == s[j])
            	{
            		flag = false;
            		break;
            	}
            }
        }
        if(flag)
        {
        	cout<<n;
        	break;
        }
    }
    return 0;
}