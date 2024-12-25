#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, carry;
    cin >> tt;
    string str;
    while(tt--){
        cin >> str;
        carry = 1;
        for (int i = str.size() - 1; i >= 0; i--) {
            int digit = str[i] - '0' + carry;
            carry = digit / 10;  
            str[i] = (digit % 10) + '0';  
        }
        if (carry) {
            str = '1' + str;
        }
        cout << str << endl;
    }

}
