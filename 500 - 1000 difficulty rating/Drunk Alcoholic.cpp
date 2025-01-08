#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    cin >>tt;
    while(tt--){
        cin >>num;
        count = 0;
        while(num > 0){
            if(num % 2 != 0){
                count += 3;
            }
            else{
                count -= 1;
            }
            num--;
        }
        cout << count <<'\n';
    }

}
