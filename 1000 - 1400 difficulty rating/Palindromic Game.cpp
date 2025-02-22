#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        string S, T;
        cin >> S >> T;
        bool brkVal = 0;
        int N = S.size();
        vector < int > cntA(26, 0), cntB(26, 0);
        for (int i = 0; i < N; i++) {
            cntA[S[i] - 'a']++;
            cntB[T[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (cntA[i] >= 2 and cntB[i] == 0) {
                cout << "A" << '\n';
                brkVal = 1;
                break;
            }
        }
        if(brkVal)
            continue;
        bool flag = true;
        for (int i = 0; i < 26; i++) {
            if (cntA[i] == 1 and cntB[i] == 0) {
                flag = false;
            }
        }
        if (flag) {
            cout << "B" << '\n';
            continue;
        }
        for (int i = 0; i < 26; i++) {
            if (cntB[i] >= 1 and cntA[i] == 0) {
                cout << "B" << '\n';
                brkVal = 1;
                break;
            }
        }
        if(brkVal)
            continue;
        cout << "A" << '\n';
    }
}
