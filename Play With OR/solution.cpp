#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of an array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // Play with OR

     for (int i = 0; i < n-1; i++) {
            
            arr[i] = arr[i] | arr[i + 1];
    }

    cout<<"Result: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}