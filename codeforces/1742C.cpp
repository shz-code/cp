//Codeforces
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n=8, r_row = 0;
    bool res = true;
    char arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cin>>arr[i][j];
    }
    for(int i=0;i<n;i++)
    {
        int r_count=0;
        if(arr[i][0] == 'R')
        {
            r_row++;
            for(int j=0;j<n;j++)
            {
                if(arr[i][j] == 'R') r_count++;
            }
        }
        if(r_count == 8)
        {
            cout<<"R"<<endl;
            res=false;
            break;
        }
    }
    if(r_row == 0 || res) cout<<"B"<<endl;
}
int main()
{
    // Faster Input Output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}