#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, oneCount1, oneCount2;
    string str1, str2;
    cin>> tt;
    while(tt--){
        oneCount1 = 0;
        oneCount2 = 0;
        cin >> size >> str1 >> str2;
        for(int i = 0; i < size; i++){
            if( str1[i] == '1'){
                oneCount1++;
            }
        }
        for(int i = 0; i < size; i++){
            if( str2[i] == '1'){
                oneCount2++;
            }
        }
        if(oneCount1 == oneCount2){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
