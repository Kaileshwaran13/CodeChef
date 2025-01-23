#include<bits/stdc++.h>
using namespace std;

int find_substring(string
    const & s) {
    if (s.find('1') == string::npos) {
        return 0;
    }
    if (s.find("11") != string::npos)
        return 2;
    return 1;

}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << find_substring(s) << endl;
    }
    return 0;
}
