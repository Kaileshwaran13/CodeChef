#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num;
    cin >> tt;
    while(tt--){
        cin >> num;
        int change = num % 10;
        num = ((num / 10) * 10);
        if( change >= 5){
            num += 10;
        }
        cout << 100 - num << '\n';
    }

}
