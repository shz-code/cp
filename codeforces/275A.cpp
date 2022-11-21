// Problem: A. Lights Out
// Contest: Codeforces Round #168 (Div. 2)
// URL: https://codeforces.com/contest/275/problem/A
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

#define FAST  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define nl "\n"

int a[4][4],b[4][4];

void toggleSwitch(int i,int j)
{
	(b[i][j] == 1 ? b[i][j]=0 : b[i][j]=1);
	(b[i+1][j] == 1 ? b[i+1][j]=0 : b[i+1][j]=1);
	(b[i-1][j] == 1 ? b[i-1][j]=0 : b[i-1][j]=1);
	(b[i][j+1] == 1 ? b[i][j+1]=0 : b[i][j+1]=1);
	(b[i][j-1] == 1 ? b[i][j-1]=0 : b[i][j-1]=1);
}

void solve()
{
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++) cin>>a[i][j]; 
	}
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++) b[i][j] = 1; 
	}
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			if(a[i][j] != 0)
			{
				if(a[i][j] % 2 != 0)
				{
					toggleSwitch(i,j);
				}
			}
		}
	}
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++) cout<<b[i][j];
		cout<<nl;
	}
}
int main()
{
	// Faster Input Output
	FAST 
	int q=1;
	//cin >> q;
	while (q--)
	{
		solve();
	}
	return 0;
}