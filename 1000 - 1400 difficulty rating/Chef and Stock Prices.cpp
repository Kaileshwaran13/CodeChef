#include <iostream>
using namespace std;

int main() {
    int tc;
    float s, a, b, c;
    cin >> tc;
    while (tc--) {
        cin >> s >> a >> b >> c;
        float p = s + ((s * c) / 100);
        if (p >= a && p <= b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
