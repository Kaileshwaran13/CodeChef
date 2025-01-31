#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int f = 0;
        string str[n];
        for (int i = 0; i < n; i++) {
            cin >> str[i];
        }

        for (int i = 0; i < n - 1; i++) {
            if (str[i] == "cookie" && str[i + 1] != "milk") 
                f = 1;
        }

        if (f == 1)
            cout << "NO" << endl;
        else if ((n == 1 && str[0] == "cookie") || str[n - 1] == "cookie") 
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }

}
