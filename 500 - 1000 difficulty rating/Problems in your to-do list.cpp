#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, valCount, num, count;
    cin >> tt;
    while(tt--){
        count = 0;
        cin >> valCount;
        while(valCount--){
            cin >> num;
            if(num >= 1000){
                count++;
            }
        }
        cout << count <<'\n';
    }

}
