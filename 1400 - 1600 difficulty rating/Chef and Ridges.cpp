#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        int num = 0, denum = 1, width;
        for (int n = 1; n <= N; n++) {
            num *= 2;
            denum *= 2;
            if (n % 2 == 1)
                num += 1;
            else 
                num -= 1;
        }
        cout << num << ' ' << denum << ' ';
    }
    cout << endl;
}
