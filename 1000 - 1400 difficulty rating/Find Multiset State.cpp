#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        vector < int > vec;
        int N, K;
        cin >> N >> K;


        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            vec.push_back(x);
        }


        while (K--) {
            if (vec.size() <= 1) break; // Avoid invalid access

            // Calculate sum of first and last elements
            int sum = vec.front() + vec.back();

            // Erase the first and last elements
            vec.erase(vec.begin());
            vec.erase(vec.end() - 1);

            vec.push_back(sum);
        }

        // Output the resulting vector
        for (int i: vec) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
