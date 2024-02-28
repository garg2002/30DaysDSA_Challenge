#include<iostream>
#include<string.h>

using namespace std;

int DivisibleByEight(string s){
        int sum=0;
        if(s.size()<4){
            for (int i=0;i<s.size();i++){
                sum = (sum*10)+(s[i]-'0');
            }
        }
        else 
        {
            for(int i=s.size()-3;i<s.size();i++){
                sum = (sum*10)+(s[i]-'0');
            }
        }
        if (sum%8==0)
        return 1;
        else 
        return -1;
 }
int main()
{ 
    string s;
    cin>>s;
    int res = DivisibleByEight(s);
    cout<<"Result: "<<res;

    return 0;
}