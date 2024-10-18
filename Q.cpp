#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";
    
    for (char c : s) {
        if (isalpha(c)) {  // Check if the character is a letter
            result += c;   // Add it to the result if it is a letter
        }
    }

    cout << result << endl;

    return 0;
}
