#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = { 10,30,40,20,60};

//finding Largest element
    int maxElement = INT16_MIN;
    for(int i=1;i<5;i++)
    {
        if(arr[i-1]<arr[i])
            maxElement  = arr[i];
    }

// finding second largest element 
    int secondMAxElement = INT16_MIN;
    for (int  i = 0; i < 5; i++)
    {
        if(maxElement != arr[i])
        {
            secondMAxElement = max(secondMAxElement, arr[i]);
        }
    }
    

//Printing Array
    for (int  i = 0; i < 5; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"Largest Element: "<<maxElement<<endl;;
    cout<<"Second Largest Element: "<<secondMAxElement;
    

    return 0;
}