#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        vector < long > v(x + y);   
        int i = 0, j = x + y - 1;  
        while (x > 0) {
            v[i] = 1;
            v[j] = 1;
            i++;
            j--;
            x -= 2;
        }
        while (y > 0) {
            v[i] = 2;
            v[j] = 2;
            i++;
            j--;
            y -= 2;
        }
        long ans = 0;
        for (int i = 0; i < v.size(); i++) {
            ans = ans * 10 + v[i];
        }
        cout << ans << endl;
    }
}
