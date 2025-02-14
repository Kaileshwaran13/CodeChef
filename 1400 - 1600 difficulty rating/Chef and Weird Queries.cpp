#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long num;
        cin >> num;
        long long val = 0;
        for (int i = 1; i <= 700 && i < num; i++) {
            val += sqrt(num - i);
        }
        cout << val << endl;
    }
    return 0;
}
