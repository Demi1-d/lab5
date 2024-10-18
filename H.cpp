#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream bs (s);
    string word;
    while(bs>>word){
        bool check=true;
        for (char element:word){
            if(element>=48 && element<=57){
                check =false;
                break;}
        }
        if(check==true){
            cout<<word<<"\n";
        }
    }
    return 0;
}