#include<iostream>
using namespace std;

 bool isMonotonic(int  nums[], int n) {
     bool isIncreasing=true,isDecreasing=true; 
    for(int i=1;i<n;i++){
        if(nums[i]>nums[i-1])
            isDecreasing=false;
        if(nums[i]<nums[i-1])
            isIncreasing=false;
    }
    
    return isIncreasing||isDecreasing;
}

    int main()
    {
        int n;
        cin>>n;
        int nums[n];
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
       
        bool res = isMonotonic(nums,n);
        cout<<"Result: "<<res;
        return 0;
    }