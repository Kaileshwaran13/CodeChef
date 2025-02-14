#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;
int main() {
    int t;
    cin >> t;
    lld k;
    char T[5] = {'0','2','4','6','8'};
    while (t) {
        t--;
        scanf("%lld", & k);
        if (k <= 5) {
            printf("%c", T[(int) k - 1]);
        }
        else {
            k--;
            string str = "";
            while ((k / 5)) {
                str = T[(int)(k % 5)] + str;
                k /= 5;
            }
            str = T[(int)(k % 5)] + str;
            printf("%s", str.c_str());

        }
        if (t > 0)
            cout << '\n';
    }
    return 0;
}
