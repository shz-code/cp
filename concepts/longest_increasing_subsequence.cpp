// Concept: Longest Strictly Increasing Subsequence 
// Platform: HackerRank

#include <bits/stdc++.h>
using namespace std;
 
#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);

const int N = 1e5+7;
int dp[N];

int main()
{
    // Faster Input Output
    FAST
    int n; cin>>n;
    int a[n];
    int longest=1;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	dp[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i] > a[j])
            {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    for(int i=0;i<n;i++) longest = max(longest, dp[i]);
    cout<<longest<<endl;
    return 0;
}