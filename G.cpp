#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream bnurbek (s);
    string firstword,secondword;
    bnurbek>>firstword>>secondword;
    if(firstword==secondword){
        cout<<"YES";
    }
    else cout<<"NO";


    return 0;
}