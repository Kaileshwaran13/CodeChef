#include<bits/stdc++.h>
using namespace std;

int main() {
    const int N = 128;
    vector < int > vec(N);
    vec[0] = 0;
    vec[1] = 0;
    for (int i = 2; i < N; i++) {
        int val = vec[i - 1];
        int index = -1;
        for (int j = 0; j < i - 1; j++) {
            if (val == vec[j]) 
                index = j;
        }
        if (index == -1) 
            vec[i] = 0;
        else 
            vec[i] = i - 1 - index;
    }

    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int val = vec[n - 1], count = 0;
        for (int i = 0; i < n; i++) {
            if (val == vec[i]) 
                count++;
        }
        cout << count << '\n';
    }
}
