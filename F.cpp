#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int>sandar;
    set<int>uniq;
    for(int i =0;i<s.size();i++){
        sandar[s[i]]++;
    }
    for (auto it:sandar){
        uniq.insert(it.second);
    }
    if (uniq.size()>1){
        cout<<"NO";
    }
    else cout<<"YES";

    return 0;

}