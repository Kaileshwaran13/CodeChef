#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num1, num2, num3;
    cin >> tt;
    while(tt--){
        cin >> num1 >> num2 >> num3;
        cout << max(num1, max(num2,num3)) << '\n';
        
    }

}
