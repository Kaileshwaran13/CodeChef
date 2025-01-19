#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sum1 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                sum1++;
        }
        int j = min(sum1, n - sum1);
        if (j % 2 != 0)
            cout << "Zlatan" << '\n';
        else
            cout << "Ramos" << '\n';

    }
}
