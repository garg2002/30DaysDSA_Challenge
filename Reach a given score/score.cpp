#include<iostream>
using namespace std;
int count (int n)
{
    long store = 0;
        for (long i = 0; i <= n; i += 3) {
            store += (n - i) % 5 == 0 ? (n - i) / 10 + 1 : 0;
        }
        return store;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Result: "<<count(n);
    return 0;
}