#include <bits/stdc++.h>
using namespace std;
int main(){
    char t;
    cin>>t;
    string s;
    cin>>s;
    string result="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=t){
            result+=s[i];
        }

    }
    cout<<result;


    return 0;
}