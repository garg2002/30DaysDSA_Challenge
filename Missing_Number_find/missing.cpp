#include<iostream>
using namespace std;

int main()
{
    int n=6;
    int arr[n-1] = {1,5,3,4,6};
    /*
    Formula: 
    Sum of n numbers in a given series : (n * (n+1))/2
    */
    int SumOfNumbers = (n*(n+1)/2);

    int sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        sum += arr[i];
    }

    cout<< "Missing Number is : "<<SumOfNumbers-sum<<endl;
    
    return 0;
}