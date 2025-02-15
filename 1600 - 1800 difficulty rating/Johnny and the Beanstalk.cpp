#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];
        int cur = 1, flag = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] > cur) {
                flag = 1;
                break;
            }
            cur -= v[i];
            cur <<= 1;
        }
        if (cur == 0 && flag == 0) 
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
}
