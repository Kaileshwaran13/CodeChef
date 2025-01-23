#include <iostream>

#include<bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        map < char, int > m;
        for (auto i: s) {
            m[i]++;
        }
        int max_freq = 0, sum_freq = 0;
        for (auto i: m) {
            if (i.second > max_freq) {
                max_freq = i.second;
            }
            sum_freq += i.second;
        }
        if (max_freq == (sum_freq - max_freq)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
