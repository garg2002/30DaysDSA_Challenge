#include<bits/stdc++.h>
using namespace std;

int countPair(int arr[], int n , int k)
{
    map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(mp.find(k-arr[i])!=mp.end()){
                ans+=mp[k-arr[i]];
            }
            mp[arr[i]]++;
        }
        return ans;
}
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the number: ";
    cin>>k;

    int res = countPair(arr, n, k);
    cout<<"Result: "<<res;
    return 0;
}