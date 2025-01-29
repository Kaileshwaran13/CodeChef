#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    while (T--) {
        int A[3], B[3];
        int count1 = 0, count2 = 0;
        for (int i = 0; i < 3; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < 3; i++) {
            cin >> B[i];
        }
        for (int i = 0; i < 3; i++) {
            if (A[i] == 1) {
                count1++;
            }
            if (B[i] == 1) {
                count2++;
            }
        }
        if (count1 == count2) {
            cout << "Pass\n";
        }
        else {
            cout << "Fail\n";
        }
    }

}
