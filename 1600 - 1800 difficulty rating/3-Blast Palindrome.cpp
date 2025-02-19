#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string& s) {
    int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        if (is_palindrome(S)) {
            cout << "YES" << endl;
        } else {
            bool possible = false;
            for (int i = 0; i < N - 1; ++i) {
                if (S[i] == S[i + 1]) {
                    possible = true;
                    break;
                }
            }
            if (possible) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
