#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0, flag2 = 0, count = 0;
        cin >> n;
        vector < vector < int >> v(n, vector < int > (n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cin >> v[i][j];
        }
        if (v[0][1] != 2) {
            flag = 1;
            count++;
        }
        for (int i = 2; i < n; i++) {
            if (flag == 0 && i + 1 != v[0][i]) {
                count += 2;
                flag = 1;
            }

            if (i + 1 != v[0][i])
                flag = 1;

            else
                flag = 0;
        }
        cout << count << endl;
    }
    return 0;
}
