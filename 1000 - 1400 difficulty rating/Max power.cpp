#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') {
            cout << c << endl;
            break;
        }

        c++;
    }

}
