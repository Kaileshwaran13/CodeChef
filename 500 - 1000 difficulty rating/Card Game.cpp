#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N, X;
        cin >> N >> X;
        int evenCount = N / 2;
        int oddCount = (N + 1) / 2;
        if (X % 2 == 0) {
            cout << evenCount - (X % 2 == 0) << endl;
        } else {
            cout << oddCount - (X % 2 != 0) << endl;
        }
    }
    
    return 0;
}
