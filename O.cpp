#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int l, r;
    cin >> s >> l >> r;

    // Output the substring from index l to r (inclusive)
    cout << s.substr(l, r - l + 1) << endl;

    return 0;
}
