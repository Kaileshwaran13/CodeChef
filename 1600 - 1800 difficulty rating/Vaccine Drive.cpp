#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int G, P;
        vector < int > N(10);
        cin >> G >> P;
        for (auto & i: N) {
            cin >> i;
        }
        int sum = 0;
        for (int i = 9; i > G - 1; i--) {
            sum += N[i];
        }
        cout << sum / P + 1 << " ";
        sum += N[G - 1];
        if (sum % P) {
            cout << sum / P + 1 << endl;
        }
        else {
            cout << sum / P << endl;
        }
    }
}
