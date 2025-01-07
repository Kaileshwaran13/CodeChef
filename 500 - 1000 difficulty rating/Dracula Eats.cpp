#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    cin >> tt;
    while(tt--){
        cin >> num;
        count = num / 7;
        num %= 7;
        if(num > 1){
            count++;
        }
        cout << count <<'\n';
    }

}
