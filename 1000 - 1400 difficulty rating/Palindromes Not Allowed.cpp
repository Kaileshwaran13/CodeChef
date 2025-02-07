#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int i = 97, count = 1;

        while (count <= n) {
            cout << char(i);
            i++;
            if (i == 123) {
                i = 97;
            }
            count++;
        }
        cout << endl;
    }
    return 0;
}
