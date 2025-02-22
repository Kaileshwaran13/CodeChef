#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        deque < int > dq;
        for (int i = 0; i < n; i++) {
            dq.push_back(arr[i]);
        }
        int count = 0;
        while (dq.size() > 1) {
            int a = dq.back();
            dq.pop_back();
            int b = dq.back();
            dq.pop_back();
            if (a == b) {
                dq.push_front(0);
            } else {
                dq.push_back(b);
                count++;
            }
        }
        int ans = count + dq.size();
        cout << ans << endl;
    }
    return 0;
}
