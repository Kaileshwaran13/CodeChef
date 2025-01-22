#include <iostream>
using namespace std;

int main() {
    int t;cin >> t;
    
    while (t--) {
        int n;cin >> n;
        
        bool good = true;
        for (int i =0; i< n;i++) {
            int s;cin >> s;
            if (s <= 4) {
                good = false;
            }
        }
        
        if (good) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
