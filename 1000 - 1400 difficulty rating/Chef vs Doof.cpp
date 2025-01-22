#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int mul = 1;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            mul &= num;
        }
        
        if (mul & 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
