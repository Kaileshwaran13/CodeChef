#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int w, l;
        cin >> w >> l;
        if (w % 2 != 0 && l % 2 != 0)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}
