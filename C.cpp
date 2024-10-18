#include <iostream>
using namespace std;

int main(){
    string s;
    char arip;
    int san;
    cin>>s;
    cin>>arip;
    cin>>san;
    int counter=0;
    for (int i =0;i<s.size();i++){
        if (s[i]==arip){
            counter++;
        }
    }


    if(counter==san){
        cout<<"YES";
    }
    else cout<<"NO";




    return 0;
}