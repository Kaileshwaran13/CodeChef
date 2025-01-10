#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, zeroCount, oneCount;
    cin >> tt;
    string str;
    while(tt--){
        zeroCount = 0;
        oneCount = 0;
        cin >> size;
        cin >> str;
        for(int i = 0; i < size; i++){
            if(str[i] == '0'){
                zeroCount++;
            }
            else{
                oneCount++;
            }
        }
        if(zeroCount == size){
            cout << 0 << '\n';
        }
        else if(oneCount == size){
            cout << 1 << '\n';
        }
        else{
            if(oneCount > size / 2){
                cout << zeroCount + 1 << '\n';
            }
            else{
                cout<< oneCount << '\n';
            }
        }
    }

}
