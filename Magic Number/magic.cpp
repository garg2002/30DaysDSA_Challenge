#include<iostream>
using namespace std;

int magicNumber(int n, int arr[])
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == i)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of elements you want in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int res = magicNumber(n, arr);

    cout<<"Result: "<<res;

    return 0;
}