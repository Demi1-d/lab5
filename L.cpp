#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int left = 0;
    int right = s.size() - 1;
    bool check = false;
    bool palindrom = true;

    // Iterate until the middle of the string
    while (left < right) {
        if (s[left] != s[right]) {
            if (!check) {  // Allow a one-time mismatch adjustment
                if (s[left] + 1 == s[right]) {
                    left++;  // Skip the left character
                } else if (s[left] == s[right] - 1) {
                    right--;  // Skip the right character
                } else {
                    palindrom = false;
                    break;
                }
                check = true;  // Mismatch adjustment used
            } else {
                palindrom = false;  // Already adjusted, can't adjust again
                break;
            }
        } else {
            left++;  // Move inward from the left
            right--; // Move inward from the right
        }
    }

    // Output result after the loop finishes
    if (palindrom) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
