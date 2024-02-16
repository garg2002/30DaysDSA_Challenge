#include<iostream>
using namespace std;


int Search(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }

    return  -1;
} 
int main()
{
    int arr[6]= {10,2,5,7,3,11};

    int x = 7;

    int result = Search(arr, 6, x );

    cout<<"Element "<<x<<" will be searched at "<<result <<" index in given array";

    return 0;

}