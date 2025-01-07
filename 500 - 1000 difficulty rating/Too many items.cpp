#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num;
    cin >> tt;
    while(tt--){
        cin >> num;
        cout << (num / 10) + ((num % 10 > 0) ? +1:+0) << '\n';
    }

}
