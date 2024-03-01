#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string maximumOddBinaryNumber(string s) {
      std::sort(s.rbegin(),s.rend());
        if(s[0]=='1'){
          s.erase(0,1);
          s +='1';  
        }
        return s;   
}
int main() {
    string str;
    cout<<"Enter the String: ";
    cin>>str;

    string s = maximumOddBinaryNumber(str);
    cout<<"Result: "<<s;

    return 0;

}