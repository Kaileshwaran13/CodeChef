#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        int cnt = 0;
        if (b > a) 
            swap(b, a);
        bool ar = false, ri = false;
        while (a > 0 && b > 0) {
            cnt++;
            if (b > a) 
                swap(a, b);
            if (a % b == 0) 
                break;
            if (a > 2 * b) {
                if (cnt % 2) 
                    ar = true;
                else 
                    ri = true;
                break;
            }
            a %= b;
        }
        if (cnt % 2 || ar) 
            cout << "Ari\n";
        else 
            cout << "Rich\n";
    }
    return 0;
}
