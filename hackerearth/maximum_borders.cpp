#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y,cnt=0;;
        cin >> x >> y;
        set<int> s;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                char bw;
                cin >> bw;
                if(bw == '#')
                    cnt++;
                else{
                    s.insert(cnt);
                    cnt=0;
                }
            }
        }
        auto first = s.end();
        first--;
        cout<<*first<<endl;
    }
}