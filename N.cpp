#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int left = 0;
    int right = s.size() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (s[left] != s[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        cout << "YES";  // String is a palindrome
    } else {
        cout << "NO";   // String is not a palindrome
    }

    return 0;
}
