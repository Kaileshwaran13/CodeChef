#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N;
        cin >> N; 
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        int count0 = 0, count1 = 0, count2 = 0;
        for (int num : A) {
            if (num % 3 == 0)
                count0++;
            else if (num % 3 == 1)
                count1++;
            else
                count2++;
        }
        if ((count1 + count2 * 2) % 3 != 0) {
            cout << -1 << endl;
            continue;
        }
        int moves = 0, balance = min(count1, count2);
        moves += balance;       
        count1 -= balance;
        count2 -= balance;
        moves += count1 / 3 * 2; 
        moves += count2 / 3 * 2;  
        cout << moves << endl;
    }
    return 0;
}
