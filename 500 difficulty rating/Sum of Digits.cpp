#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, sum;
    cin >> tt;
    while(tt--){
        sum = 0;
        cin >> num;
        while(num != 0){
            sum += (num % 10);
            num /= 10;
        }
        cout << sum << '\n';
    }
}
