#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        long long int sum = 0;
        int flag = 1;
        int non_zero = 0;
        for (long long int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
            sum += temp;
            if (temp) {
                non_zero++;
            }
        }
        if (sum >= 100 and sum < 100 + non_zero) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << "\n";
    }
}
