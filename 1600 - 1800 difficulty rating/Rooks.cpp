#include <bits/stdc++.h>
using namespace std;
typedef pair < int, int > pii;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        set < int > occupiedRows, occupiedCols;
        vector < pii > prePlacedRooks;
        for (int i = 0; i < K; i++) {
            int r, c;
            cin >> r >> c;
            prePlacedRooks.push_back({r,c});
            occupiedRows.insert(r);
            occupiedCols.insert(c);
        }
        vector < int > freeRows, freeCols;
        for (int i = 1; i <= N; i++) {
            if (occupiedRows.find(i) == occupiedRows.end()) {
                freeRows.push_back(i);
            }
            if (occupiedCols.find(i) == occupiedCols.end()) {
                freeCols.push_back(i);
            }
        }
        vector < pii > newRooks;
        for (size_t i = 0; i < min(freeRows.size(), freeCols.size()); i++) {
            newRooks.push_back({
                freeRows[i],
                freeCols[i]
            });
        }
        cout << newRooks.size();
        for (const auto & rook: newRooks) {
            cout << " " << rook.first << " " << rook.second;
        }
        cout << "\n";
    }
    return 0;
}
