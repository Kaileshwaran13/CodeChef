#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, y1, y2, flag = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        vector < int > x {1,1,2,2,-1,-1,-2,-2};
        vector < int > y {2,-2,1,-1,2,-2,1,-1};
        set < pair < int, int >> st;
        for (int i = 0; i < 8; i++) {
            int nx = x1 + x[i];
            int ny = y1 + y[i];
            if (nx > 0 && ny > 0 && nx < 9 && ny < 9 && (nx != x2 || ny != y2))
                st.insert({nx,ny});
        }
        for (int i = 0; i < 8; i++) {
            int nx = x2 + x[i];
            int ny = y2 + y[i];
            if (nx > 0 && ny > 0 && nx < 9 && ny < 9 && (nx != x1 || ny != y1)) {
                if (st.count({nx,ny})) {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}
