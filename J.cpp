#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    char max=s[0];
    for(int i=0;i<s.size();i++){
        if (max<s[i]){
            max=s[i];
        }
    }



    cout<<max;
    return 0;
}