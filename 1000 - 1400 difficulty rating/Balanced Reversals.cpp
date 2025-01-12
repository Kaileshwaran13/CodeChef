#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    string str;
    cin >> tt;
    while(tt--){
        cin >> size;
        cin >> str;
        sort(str.begin(), str.end());
        cout << str << '\n';
    }

}
