#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (char &c : s) {
        if (c == 'z') {
            c = 'a';  // Wrap around 'z' to 'a'
        } else {
            c++;  // Shift other characters to the next one
        }
    }

    cout << s << endl;

    return 0;
}
