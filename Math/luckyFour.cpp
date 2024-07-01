#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    long num;
    while(t--){
        cin >> num;
        int count = 0;
        while(num != 0){
            if(num % 10 == 4){
                count++;
            }
            num /= 10;
        }
        cout << count << '\n';
    }
}