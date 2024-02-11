#include<iostream>
using namespace std;

int rotated(int arr[], int n)
{
    int ans = arr[0];
    int start = 0;
    int end = n-1;

    while(start<=end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid]>=arr[0])
            start = mid+1;
        else
            {
                ans = arr[mid];
                end = mid-1;
            }
    }
    
    return ans;
}

int main()
{
    int arr[6] = {4,6,8,10,1,2};
    int result = rotated(arr, 6);
    cout<<"Minimum element in rotated sorted array is : "<<result;

    return 0;
}