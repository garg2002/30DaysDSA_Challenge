#include <bits/stdc++.h>
using namespace std;
int firstElementKTime(int n, int k, int arr[])
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        if (++m[arr[i]] >= k)
            return arr[i];
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int res = firstElementKTime(n, k, arr);
    cout<<"Result: "<<res;
    return 0;
}