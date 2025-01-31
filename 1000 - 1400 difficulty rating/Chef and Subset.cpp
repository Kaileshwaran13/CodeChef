#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int a[4];
        for (long long i = 0; i < 4; i++) {
            cin >> a[i];
        }
        bool flag = false;
        long long total = 16;
        for (long long i = 0; i < total; i++) {
            long long sum = 0;
            for (long long j = 0; j < 4; j++) {
                if (i & (1 << j))
                    sum = sum + a[j];
            }
            if (sum == 0 && i != 0)
            {
                flag = true;
                break;
            }

        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
