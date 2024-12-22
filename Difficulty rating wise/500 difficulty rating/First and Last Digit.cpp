#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, sum;
    cin >> tt;
    while(tt--){
        sum = 0;
        cin >> num;
        sum += (num % 10);
        while(num >= 10){
            num /= 10;
        }
        sum += num;
        cout << sum << '\n';
    }
}
