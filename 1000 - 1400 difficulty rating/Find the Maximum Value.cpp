#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a[51] = {0};
        int count = 0, h = 0, max = 0;
        for (int i = 0; i < 51; i++) {
            cin >> a[i];
            count += 1;
            char c;
            c = getchar();
            if (c == '\n') 
                break;
        }
        for (int i = 0; i < count; i++) {
            if (a[i] == 0) 
                break;
            h++;
        }
        for (int i = 0; i < h; i++) {
            if (a[i] == h - 1) {
                a[i] = 0;
                break;
            }
        }
        for (int i = 0; i < h; i++) {
            if (a[i] > max) 
                max = a[i];
        }
        cout << max << '\n';
    }
}
