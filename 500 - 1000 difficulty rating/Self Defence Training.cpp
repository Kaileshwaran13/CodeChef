#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, count, num, val;
    cin >>tt;
    while(tt--){
        count = 0;
        cin >>val;
        while(val--){
            cin >> num;
            if( num >= 10 && num <= 60 ){
                count++;
            }
        }
        cout << count << '\n';
    }

}
