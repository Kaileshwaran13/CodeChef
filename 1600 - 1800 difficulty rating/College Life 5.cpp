#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, counter, switches;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector < int > football(n);
        vector < int > cricket(m);
        vector < int > merged_arr(m + n);
        for (int i = 0; i < n; i++) {
            cin >> football[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> cricket[i];
        }
        int i = 0, j = 0, k = 0;
        while (i < n && j < m) {
            if (football[i] < cricket[j]) {
                merged_arr[k] = 0;
                k++;
                i++;
            }
            else {
                merged_arr[k] = 1;
                j++;
                k++;
            }
        }
        while (i < n) {
            merged_arr[k] = 0;
            k++;
            i++;
        }
        while (j < m) {
            merged_arr[k] = 1;
            j++;
            k++;
        }
        counter = 0;
        switches = 0;
        for (int i = 0; i < (m + n); i++) {
            if (counter != merged_arr[i]) {
                switches++;
                counter = merged_arr[i];
            }
        }
        cout << switches << endl;
    }
    return 0;
}
