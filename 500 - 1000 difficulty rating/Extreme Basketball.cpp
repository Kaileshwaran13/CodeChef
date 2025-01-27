#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num1, num2;
    cin >> tt;
    while(tt--){
        int val = 0;
        cin >> num1 >> num2;
        if(num1 > (num2 + 10))
            val = 0;
        else{
            num2 = (num2 + 10) - num1;
            val = num2/3;
            if(num2 % 3 > 0)
                val++;
        }
        cout << val << '\n';
        
    }
}
