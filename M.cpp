#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool check=true;

    for(int i=0;i<s.size();i++){
        if(s[i]<s[i-1]){
            check=false;
            break;
        }
    }
    if(check){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
