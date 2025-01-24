//Keep Moving Forward !!!
#include<bits/stdc++.h>

using namespace std;

void testcase() {
    int N, K, L;
    cin >> N >> K >> L;
    multiset < int > playlist;
    for (int i = 0; i < N; i++) {
        int minute, lang;
        cin >> minute >> lang;
        if (lang == L) {
            playlist.insert(minute);
        }
    }
    if (playlist.size() >= K) {
        int res = 0;
        auto it = playlist.rbegin();
        while (K--) {
            res += * it;
            ++it;
        }
        cout << res;
    }
    else {
        cout << -1;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        testcase();
        cout << "\n";
    }
    return 0;
}
