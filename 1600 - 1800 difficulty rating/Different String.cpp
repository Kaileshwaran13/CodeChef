#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, x;
        for (int i = 0; i < n; i++) {
            cin >> s;
            if (s[i] == '1') 
                x += '0';
            else 
                x += '1';
        }
        cout << x << endl;
    }
    return 0;
}
