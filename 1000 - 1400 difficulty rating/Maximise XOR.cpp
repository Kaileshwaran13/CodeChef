#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    string str1, str2;
    cin >> tt;
    while(tt--){
        cin >> str1 >> str2; 
        int firstStr1 = 0, firstStr0 = 0, secondStr0 = 0, secondStr1 = 0;
        for(int i = 0; i < str1.size(); i++){
            if( str1[i] == '0'){
                firstStr0++;
            }
            else{
                firstStr1++;
            }
        }
        for(int i = 0; i < str2.size(); i++){
            if( str2[i] == '0'){
                secondStr0++;
            }
            else{
                secondStr1++;
            }
        }
        int zeroCount = firstStr0 +secondStr0;
        int oneCount = firstStr1 + secondStr1;
        for(int i = 0; i < min(zeroCount, oneCount); i++){
            cout << 1;
        }
        for(int i = min(zeroCount, oneCount); i < str1.size(); i++){
            cout << 0;
        }
        cout <<'\n';
    }
}
