#include<iostream>
using namespace std;
int PeakIndex(int a[], int start, int end)
{
    while(start<=end)
    {
        int mid = end + (start-end)/2;
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
            return mid;
        else if(a[mid]>a[mid-1])
            start = mid+1;
        else
            end = mid-1;
    }
}
int main()
{
    int arr[7] = {2,4,6,8,10,8,5};
    int result = PeakIndex(arr, 0, 6);
    cout<<"Peak index in mountain array is : "<<arr[result];

    return 0;
}