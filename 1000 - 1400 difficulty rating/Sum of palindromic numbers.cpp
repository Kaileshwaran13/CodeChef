#include <bits/stdc++.h>
using namespace std;

int checkPalindrome(int num){
    string str = to_string(num);
    string reverse_str = str;
    reverse(reverse_str.begin(), reverse_str.end());
    if( str == reverse_str){
        return 0;
        
    }
    else{
        return 1;
    }
}

int main() {
    int tt, num1, num2, sum;
    cin >> tt;
    while(tt--){
        sum = 0;
        cin >> num1 >> num2;
        for(int i = num1; i <= num2; i++){
            if(checkPalindrome(i) == 0){
                sum += i;
            }
        }
        cout << sum << '\n';
    }

}
