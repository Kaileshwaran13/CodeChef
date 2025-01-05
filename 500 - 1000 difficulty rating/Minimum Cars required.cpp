#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    cin >> tt;
    while(tt--){
        count = 0;
        cin >> num;
        if( (num % 4 > 0) ){
            count += 1;
        }
        count += (num / 4);
        cout << count << '\n';
    }

}
