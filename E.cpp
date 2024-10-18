#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string hexdigit="0123456789ABCDEF";
    string result="";
    while(n>0){
        int remainder=n%16;
        result=hexdigit[remainder]+result;
        n/=16;

    }
    cout<<result;
    return 0;
}