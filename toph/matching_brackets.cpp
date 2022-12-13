// Stack
// Problem: https://toph.co/p/matching-brackets
#include <bits/stdc++.h>
using namespace std;

#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

void solve()
{
    string s;
    cin>>s;
    stack<char> sk;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '[' || s[i] == '(' || s[i] == '{') sk.push(s[i]);
        char c;
        if(!sk.empty()) c = sk.top();
        if(sk.empty() && (s[i] == ']' || s[i] == '}' || s[i] == ')')) sk.push(s[i]);
        else if(s[i] == '}' && c == '{') sk.pop();
        else if(s[i] == ']' && c == '[') sk.pop();
        else if(s[i] == ')' && c == '(') sk.pop();
    }
    if(sk.empty()) cout<<"Yes";
    else cout<<"No";
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