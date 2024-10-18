#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char max_char = s[0];  // Store the letter of the longest substring
    int max_length = 1;     // Length of the longest substring

    char current_char = s[0];  // Current letter we are examining
    int current_length = 1;    // Current substring length

    // Loop through the string starting from the second character
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == current_char) {
            // If the current character is the same as the previous one, increase the length
            current_length++;
        } else {
            // If the current character is different, compare and reset
            if (current_length > max_length) {
                max_length = current_length;
                max_char = current_char;
            }
            // Reset current character and length
            current_char = s[i];
            current_length = 1;
        }
    }

    // Final check for the last sequence in the string
    if (current_length > max_length) {
        max_length = current_length;
        max_char = current_char;
    }

    // Output the letter and its maximum length
    cout << max_char << " " << max_length << endl;

    return 0;
}
