#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, n, count, max_count;
    count = 0;
    max_count = 0;
    cin >> n;
    vector < int > arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++) {
        if (arr[i] != 0)
            count++;
        else {
            if (count > max_count)
                max_count = count;
            count = 0;
        }
    }
    if (count > max_count)
        max_count = count;
    cout << max_count << '\n';
}
