#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            if(s[i]=='z'){
                s[i]='a';
            }
            else{
                s[i]+=1;
            }
        }
         else if(s[i]>='A'&&s[i]<='Z'){
            if(s[i]=='Z'){
                s[i]='A';
            }
            else{
                s[i]+=1;
            }
    }
        else s[i]=s[i];




    }
    cout<<s;
    
    return 0;


}