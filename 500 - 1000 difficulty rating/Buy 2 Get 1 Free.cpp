#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num1, num2;
    cin >> tt;
    while(tt--){
        cin >> num1 >> num2;
        cout << num1 * num2 - ((num1 / 3) * num2) <<'\n';
    }
    

}
