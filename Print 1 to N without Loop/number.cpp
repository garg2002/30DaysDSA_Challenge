#include<iostream>
using namespace std;

int  numberWithoutLoop(int n)
{
    if(n>=1)
    {
        numberWithoutLoop(n-1);
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    // Print 1 to N number without loop

    numberWithoutLoop(n);
   
    return 0;
}