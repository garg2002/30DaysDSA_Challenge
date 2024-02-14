#include<iostream>
using namespace std;

/* 
Time Complexity : O(N)
Space Complexity: O(1)
*/

int main()
{
    int arr[7] = {10,3,5,2,9,22,100};
    cout<<"Before Reversing element of an array:[";
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"]"<<endl;
  
    int m = 0, n = 7;
    while(m<n)
    {   
      swap(arr[m], arr[n-1]);
        m++;
        n--;
   
    }

   

    cout<<"After Reversing element of an array:[";
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"]";

    return 0;
    
}