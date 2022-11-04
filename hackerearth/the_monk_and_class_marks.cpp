// HackerEarth
// Comparator Function for custom inbuild sort
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,string> a,pair<int,string> b)
{
	if(a.first != b.first) return a > b;
	return a.second < b.second;
}

int main()
{
    int n; 
    cin >> n;
    vector<pair<int,string>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(),v.end(),cmp);
    for(auto val : v) cout<<val.second<<" "<<val.first<<endl;
    return 0;
}