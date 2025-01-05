#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num1, num2, num3, num4;
    cin >> tt;
    while(tt--){
        cin >> num1 >> num2 >> num3 >> num4;
        cout << max(num1,num2) + max(num3,num4) << '\n';
    }

}
