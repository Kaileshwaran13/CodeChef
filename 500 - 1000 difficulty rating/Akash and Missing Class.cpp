#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    cin >>tt;
    while(tt--){
        count = 0;
        cin >>num;
        count = num / 7;
        if( num % 7 == 6){
            count++;
        }
        cout << count << '\n';
    }
}
