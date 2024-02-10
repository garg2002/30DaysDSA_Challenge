#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int arr[10000];

    arr[0] = 0;
    arr[1] = 1;

    for(int i=2; i<=n;i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    // printing array;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}