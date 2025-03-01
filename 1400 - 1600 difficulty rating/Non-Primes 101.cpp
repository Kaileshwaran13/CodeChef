#include <bits/stdc++.h>
using namespace std;

int isPrime(long long int n)
{
    for (long long int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, c = 0;
        cin >> n;
        long long int a[n], sum = 0;
        vector < long long int > vo, ve, vo1;
        for (long long int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2) {
                if (a[i] == 1 && !c) {
                    vo.push_back(i + 1);
                    c++;
                }
                if (a[i] != 1) {
                    vo.push_back(i + 1);
                }
                vo1.push_back(i + 1);
            }
            else {
                ve.push_back(i + 1);
            }
        }
        if (vo.size() >= 2) {

            cout << vo[0] << " " << vo[1] << endl;
            continue;
        }
        if (ve.size() >= 2) {
            cout << ve[0] << " " << ve[1] << endl;
            continue;
        }
        if (ve.size() == 0 && vo.size() == 0) {
            cout << -1 << endl;
            continue;
        }
        int f = 0;

        for (long long int i = 0; i < ve.size(); i++) {
            for (long long int j = 0; j < vo1.size(); j++) {
                sum = a[ve[i] - 1] + a[vo1[j] - 1];
                if (!isPrime(sum)) {
                    cout << ve[i] << " " << vo[j] << endl;
                    f = 1;
                    break;
                }
            }
            if (f) {
                break;
            }
        }
        if (!f) {
            cout << -1 << endl;
        }
    }
}
