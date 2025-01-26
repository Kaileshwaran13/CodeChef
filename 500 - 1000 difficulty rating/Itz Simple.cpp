#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N, K, P;
        cin >> N >> K >> P;
        vector < int > arr(N);
        for (int j = 0; j < N; j++) {
            cin >> arr[j];
        }
        sort(arr.begin(), arr.end());
        // max value of arr
        int max = arr[arr.size() - 1];
        int vedOg = K + max;
        int sum = 0;

        for (int j = 0; j < arr.size() - 1; j++) {
            sum += arr[j];
        }
        int varOg = P + sum;
        if (vedOg > varOg) {
            cout << "Ved" << endl;
        }
        else if (vedOg < varOg) {
            cout << "Varun" << endl;
        }
        else {
            cout << "Equal" << endl;
        }


    }

}
