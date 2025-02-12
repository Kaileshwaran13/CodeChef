#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, count_e, type;
        cin >> n;
        vector < int > score(n);
        for (int i = 0; i < n; i++) {
            cin >> count_e;
            vector < int > m(6);
            for (int j = 0; j < count_e; j++) {
                cin >> type;
                m[type - 1]++;
            }
            while (true) {
                int unique = 0;
                for (auto & p: m) {
                    if (p) {
                        unique++;
                        p--;
                    }
                }
                if (unique == 0) break;
                score[i] += unique;
                if (unique == 4) score[i] += 1;
                if (unique == 5) score[i] += 2;
                if (unique == 6) score[i] += 4;
            }
        }
        auto max_pointer = max_element(score.begin(), score.end());
        int max_score = * max_pointer;
        if (count(score.begin(), score.end(), max_score) > 1) {
            cout << "tie" << endl;
        } else if (max_pointer == score.begin()) {
            cout << "chef" << endl;
        } else {
            cout << max_pointer - score.begin() + 1 << endl;
        }
    }
    return 0;
}
