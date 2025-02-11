#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector < vector < int >> v(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x;
            v[i].push_back(x);
            for (int j = 0; j < x; j++) {
                cin >> y;
                v[i].push_back(y);
            }
        }

        sort(v.begin(), v.end(), greater < vector < int >> ());

        unordered_set < int > st;
        int i = 0;
        for (i = 0; i < n; i++) {
            for (int j = 1; j < v[i].size(); j++) {
                st.insert(v[i][j]);
                if (st.size() == k) break;
            }
            if (st.size() == k) break;
        }

        if (st.size() != k) 
            cout << "sad" << endl;
        else if (i < (n - 1)) 
            cout << "some" << endl;
        else 
            cout << "all" << endl;
    }
    return 0;
}
