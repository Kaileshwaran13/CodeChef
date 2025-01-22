#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int r;
        cin >> r;
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        
        int d12 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        int d13 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
        int d23 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
        
        int total_d = d12 + d13 + d23;
        int max_d = max({d12, d13, d23});
        int min_d = min({d12, d13, d23});

        if (total_d - max_d - min_d <= r * r) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    
    return 0;
}
