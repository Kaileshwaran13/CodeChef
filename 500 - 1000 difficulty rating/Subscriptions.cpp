#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, people, subscription;
    cin >> tt;
    int value;
    while(tt--){
        cin >> people >> subscription;
        value = 0;
        value = people / 6;
        if(people < 6){
            value = 1;
        }
        else if(people % 6 != 0 && people > 6){
            value += 1;
        }
        cout << value * subscription << '\n';
    }

}
