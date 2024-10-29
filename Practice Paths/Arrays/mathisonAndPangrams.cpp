#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, flag;
    cin >> t;
    string str;
    int priceArray[26], sum;
    while(t--){
        flag = 0;
        sum = 0;
        priceArray[26] = {0};
        for(int i = 0; i < 26; i++){
            cin >> priceArray[i];
        }
        cin >> str;
        for(int i = 0; i < 26; i++){
            flag = 0;
            for(int j = 0; j < str.length(); j++){
                if(('a'+i) == str[j]){
                    flag = 1;
                }
            }
            if(flag != 1){
                sum += priceArray[i];
            }
        }
        cout << sum << '\n';
    }

}
