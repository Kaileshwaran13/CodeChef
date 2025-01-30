#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int d, x, y; 
        cin >> d >> x >> y;
        
        if (x <= y) {
            cout << 0 << endl;
            continue;
        }
        
        int cnt = 0;
        int p = x;
        
        while (true) {
            y--;
            cnt++;
            
            if (p*(100-cnt*d) <= y*100) {
                cout << cnt << endl;
                break;
            }
            
            if (y == 0 && p*(100-cnt*d) > y*100) {
                cout << -1 << endl;
                break;
            }
        }
    }
    return 0;
}
