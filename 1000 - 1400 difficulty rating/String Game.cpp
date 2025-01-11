#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, maxAlphaCount, flag;
    cin >> tt;
    while(tt--){
        maxAlphaCount = 0;
        flag = 0;
        cin >> size;
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        int arrCount[26] = {0};
        for(int i = 0; i < size; i++){
            arrCount[str[i] - 'a']++;
        } 
        for( auto x : arrCount){
            if( x > 0){
                maxAlphaCount = max(x, maxAlphaCount);
            }
        }
        for(int i = 0; i < 26; i++){
            if(arrCount[i] > 0 && arrCount[i] % 2 != 0){
                flag = 1;
                break;
            }
        }
        if( flag == 0){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
