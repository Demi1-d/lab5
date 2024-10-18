#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of email addresses
    vector<string> emails(n);

    // Input all the email addresses
    for (int i = 0; i < n; i++) {
        cin >> emails[i];
    }

    // Process each email address
    for (const string& email : emails) {
        // Check if the email ends with '@gmail.com'
        if (email.size() >= 10 && email.substr(email.size() - 10) == "@gmail.com") {
            // Extract and print the login (part before '@gmail.com')
            cout << email.substr(0, email.size() - 10) << endl;
        }
    }

    return 0;
}
