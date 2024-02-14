#include<iostream>
using namespace std;

/* 
Time Complexity : O(N)
Space Complexity: O(N)
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
  
// Copy the Element of an arr[] from the last one by one into temp[]
    int temp[7] ;
    int m = 0, n =7;
    while (n>0)
    {
        temp[m] = arr[n-1];
        n--;
        m++;
    }

// Copy the Element of an temp[] into arr[]

   for (int i = 0; i < 7; i++)
   {
    arr[i] = temp[i];
   }
   
   

    cout<<"After Reversing element of an array:[";
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"]";

    return 0;
    
}