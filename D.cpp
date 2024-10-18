#include <bits/stdc++.h>
using namespace std;

int main(){
    string ex,s;
    cin>>ex>>s;
    int a=ex.size();
    int b=s.size();

    if (b%a==0){
        string repeated="";
        for(int i=0;i<(b/a);i++){
            repeated+=ex;

        }
        if (repeated==s){
            cout<<"YES";
        }
        else cout<<"NO";
    }
    else cout<<"NO";


    return 0;
}