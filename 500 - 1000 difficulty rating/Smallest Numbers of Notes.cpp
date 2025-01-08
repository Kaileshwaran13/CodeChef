#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    cin >> tt;
    while(tt--){
        count = 0;
        cin >> num;
        if( num / 100 >= 1){
            count += num / 100;
            num %= 100;
        }
        if( num / 50 >= 1){
            count += num / 50;
            num %= 50;
        }
        if( num / 10 >= 1){
            count += num / 10;
            num %= 10;
        }
        if( num / 5 >= 1){
            count += num / 5;
            num %= 5;
        }
        if( num / 2 >= 1){
            count += num / 2;
            num %= 2;
        }
        if( num >= 0){
            count += num;
        }
        
        cout << count <<'\n';
    }

}
