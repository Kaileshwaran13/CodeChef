#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    cin >>tt;
    while(tt--){
        count = 0;
        cin >> num;
        while(num != 50){
            if( num > 50){
                num -= 3;
                count++;
            }else{
                num += 2;
                count++;
            }
        }
        cout << count <<'\n';
    }

}
