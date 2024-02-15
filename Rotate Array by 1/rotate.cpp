#include<iostream>
using namespace std;

int main()
{
    int n=8;
    int arr[n] = {10,20,30,40,50,60,70,80};
    int temp = arr[n-1];
    for(int i = n-2;i>=0;i--)
    {
        arr[i+1] = arr[i];
    }

    arr[0] = temp;

    //printing array
    for(int i=0;i<8;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}