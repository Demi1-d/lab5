#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int cnt=0;
    for(char c:s){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            cnt++;
        }
        else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            cnt++;
        }
        
    }
    cout<<cnt;



    return 0;
}
