#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, val;
    cin >> tt;
    while(tt--){
        val = 0;
        cin >> num;
        val = num % 10;
        while(num != 0){
            num /= 10;
            val = (num % 10) + (val * 10);
        }
        cout << val/10 << '\n';
    }

}
