#include<iostream>
using namespace std;

bool powerOfTwo(int n)
{
    if(n==0) return false;
        while(n%2==0) n/=2;
        return n==1; 
}
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    bool res = powerOfTwo(n);
    cout<<"Result: "<<res;

    return 0;
}