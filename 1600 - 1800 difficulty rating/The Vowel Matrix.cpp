#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, k, vowels, consonants, ans;
    string str;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cin >> str;
        vowels = consonants = 0;
        ans = 1;
        vector < long long > arr;
        for (long long i = 0; i < n; i++) {
            if (vowels == k) {
                if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')) {
                    consonants++;
                }
                else {
                    vowels = 1;
                    arr.push_back(consonants);
                    consonants = 0;
                }
            }
            else {
                if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                    vowels++;
                }
            }
        }
        for (long long i = 0; i < arr.size(); i++) {
            ans = (ans * (arr[i] + 1)) % 1000000007;
        }
        cout << ans << endl;
    }
    return 0;
}
