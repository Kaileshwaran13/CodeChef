#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    string str;
    cin >> tt;
    int count;
    while(tt--){
        count = 0;
        cin >> size;
        cin >> str;
        for(int i = 0; i < size; i++){
            if(str[i - 1] != str[i]){
                count++;
            }
        }
        cout << count <<'\n';
    }

}
