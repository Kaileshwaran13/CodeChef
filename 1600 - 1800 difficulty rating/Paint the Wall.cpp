#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector < int > h(n), nge(n);
        for (int i = 0; i < n; i++)
            cin >> h[i];
        stack < int > st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && h[i] > st.top())
                st.pop();
            nge[i] = (st.empty() ? -1 : st.top());
            st.push(h[i]);
        }
        unordered_set < int > s;
        for (int i = 0; i < n; i++) {
            int c;
            cin >> c;
            if (nge[i] == -1)
                s.insert(c);
        }
        cout << s.size() << endl;
    }
}
