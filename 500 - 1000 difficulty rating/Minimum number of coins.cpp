#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    cin >> tt;
    while(tt--){
        cin >> num;
        count = 0;
        if(num % 5 == 0 || num % 10 == 0){
            if(num >= 10 ){
                count += (num / 10);
                num -= (num / 10) * 10;
            }
            if(num >= 5){
                count += (num / 5);
                num -= (num / 5) * 5;
            }
            cout <<count <<'\n';
        }
        else {
            cout << -1 << '\n';
        }
    }

}
