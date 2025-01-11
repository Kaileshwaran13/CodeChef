#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    double num, val;
    cin >> tt;
    while(tt--){
        cin >> num;
        cout << round(pow( (0.143 * num), num)) << '\n';
    }
}
