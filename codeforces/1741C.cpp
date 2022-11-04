// Problem: C. Minimize the Thickness
// Contest: Codeforces Round #826 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1741/C
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

void solve()
{
    int n; cin>>n;
    int arr[n],sum=0,res=n;
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int cnt=0,check=0,max_index;
    for(int i=0;i<n;i++)
    {
        sum += arr[i],cnt=0,check=0,max_index=i+1;
        
        for(int j=i+1;j<n;j++)
        {
            cnt++;
            check += arr[j];
            if(sum == check)
            {
                max_index = max(max_index,cnt);
                cnt=0;
                check=0;
            }
            else if(check > sum) break;
        }       
        if(cnt==0) res=min(res,max_index);
    }
    cout<<res<<endl;
}

int main()
{
    int q; cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}