#include<iostream>
using namespace std;

int main()
{
    int left;
    cout<<"Enter the left value: "<<endl;
    cin>>left;
    int right;
    cout<<"Enter the right value: "<<endl;
    cin>>right;

     int cnt = 0;
        while (left != right) {
            left >>= 1;
            right >>= 1;
            cnt++;
        }
        
        int res = (left << cnt);
        cout<<"Result: "<<res;

        return 0;
}