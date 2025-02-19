#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        vector < long long > v(n);
        for (long long i = 0; i < n; ++i) 
            cin >> v[i];
        vector < long long > grounds;
        int key = 0;
        long long count = 0, ground1 = -1, ground2 = -1;
        for (long long i = 0; i < n; ++i) {
            if (v[i] == 0) {
                ++count;
            }
            if (v[i] == 1 || i == n - 1) {
                if (ground1 < count) {
                    long long t = ground1;
                    ground1 = count;
                    if (t > ground2)
                        ground2 = t;
                }
                else if (count <= ground1 && count > ground2)
                    ground2 = count;
                count = 0;
            }
        }
        if (ground1 % 2 == 0 || ground1 == -1)
            cout << "No" << endl;
        else {
            if (ground2 == 0 || ground2 == -1)
                cout << "Yes" << endl;
            else if (ground2 > (ground1 / 2))
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
    return 0;
}
