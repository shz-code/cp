// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U?fbclid=IwAR2uQ1vik94Ph_euzshrsWGNMDbC7u7eNffbEEWrCN6gKYX_B6hoAFUaxos
#include <iostream>
using namespace std;

#define ll long long

int main (){
	
	int n,m;
	cin>>n>>m;
	int a[n],b[m];

	// Array Input 	
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	
	int pointer = 0, limit = m;
	for(int i=0;i<n;i++)
	{
		if(a[i] == b[pointer] and pointer < limit)
		{
			pointer++;
		}
	}	
	if(pointer == limit) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}