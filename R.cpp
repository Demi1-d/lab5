#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char t;
    cin >> s >> t;

    int first = -1;  // Index of the first occurrence
    int last = -1;   // Index of the last occurrence

    // Loop through the string to find first and last occurrence of t
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t) {
            if (first == -1) {
                first = i;  // Store the first occurrence
            }
            last = i;  // Update the last occurrence each time we find t
        }
    }

    if (first != -1 && first == last) {
        // If t occurs only once, print the first (and only) occurrence
        cout << first << endl;
    } else if (first != -1) {
        // If t occurs two or more times, print the first and last occurrence
        cout << first << " " << last << endl;
    }

    // If t is not found (first == -1), we print nothing as per the problem statement
    return 0;
}
