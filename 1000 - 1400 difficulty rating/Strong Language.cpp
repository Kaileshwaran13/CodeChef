#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--){
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int max = -1;
        int count = 0;
        for (int i = 0; i < n; i++){
            if (str[i] == '*') {
                count++;
            }
            else {
                if (max < count) {
                    max = count;
                }
                count = 0;
            }
            if (max < count) {
                max = count;
            }
        }
        (max >= k) ? cout << "YES\n": cout << "NO\n";
    }
}
