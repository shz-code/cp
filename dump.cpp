#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n =3;
    int arr[] = {6,9,3},result = arr[0];
    for(int i=1;i<n;i++)
    {
        result = __gcd(arr[i],result);
    }
    cout<<result;
    return 0;
}