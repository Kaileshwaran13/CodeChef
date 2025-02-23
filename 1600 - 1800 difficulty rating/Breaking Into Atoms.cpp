#include<bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector < int > sets(n, 0);
        set < int > st;
        for (int i = 0; i < m; i++) {
            int size;
            cin >> size;
            for (int j = 0; j < size; j++) {
                int x;
                cin >> x;
                sets[x] |= (1 << i);
            }
        }
        for (int i: sets) {
            st.insert(i);
        }
        cout << st.size() << endl;
    }
    return 0;
}
