#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        int manOfTheMatch = 0;
        int index = 0;
        for (int i = 1; i <= 22; i++) {
            cin >> a >> b;
            int score = (a + (b * 20));
            if (score > manOfTheMatch) {
                index = i;
                manOfTheMatch = score;
            }
        }
        cout << index << endl;
    }
    return 0;
}
