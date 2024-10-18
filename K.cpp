#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size()){
        cout<<"NO";
        return 0;
    }
    vector<int>freq(26,0);
        vector<int>freq1(26,0);

        for(char c:s1){
        freq [c-'a']++;
    }
        for(char x:s2){
        freq1 [x-'a']++;
    }
    if(freq!=freq1){
        cout<<"NO";
    }
    else cout<<"YES";





    return 0;
}