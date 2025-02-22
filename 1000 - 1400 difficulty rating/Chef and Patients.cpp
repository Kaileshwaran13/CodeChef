#include <bits/stdc++.h>
using namespace std;

bool static comp(pair < int, int > & a, pair < int, int > & b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > arr(n);
        vector < pair < int, int >> arsr;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            arsr.push_back({arr[i],i});
        }
        sort(arsr.begin(), arsr.end(), comp);
        int val = 1;
        for (int i = 0; i < arsr.size(); i++) {
            arr[arsr[i].second] = val;
            val++;
        }
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

}
