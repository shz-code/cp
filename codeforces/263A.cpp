// Problem: A. Beautiful Matrix
// Contest: Codeforces Round #161 (Div. 2)
// URL: https://codeforces.com/problemset/problem/263/A
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
    int a[5][5];
    int t_i,t_j;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 1)
            {
                t_i = i;
                t_j = j;
            }
        }
    }
    cout<<abs(t_i-2)+abs(t_j-2);
    return 0;
}