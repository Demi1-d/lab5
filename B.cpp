#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int sum1=0;
    int sum2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            sum1++;
        }

        else if(s[i]>='A'&&s[i]<='Z'){
            sum2++;
    }
    }
    cout<<sum1<<' '<<sum2;





    return 0;

}