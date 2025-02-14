#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        long long n;
        cin >> n;
        long long t = 0;
        long long s = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == 'T') {
                t++;
            }
            else {
                s++;
            }
        }
        long long ts = (t * 2) + s;
        long long ot = 12 * n;
        long long max1 = ot / ts;
        long long fans = 0;
        for (int i = 1; i <= max1; i++) {
            long long temp = ot - (i * ts);
            fans = fans + temp;
        }
        cout << fans << endl;
    }

}
