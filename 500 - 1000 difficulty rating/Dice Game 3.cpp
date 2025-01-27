#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num;
    cin >> tt;
    while(tt--){
        cin >> num;
        cout << (num / 2) + (num / 2) * 6 +((num - (num / 2)) * 6) << '\n';
    }

}
