#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, count;
    string str;
    cin >>tt;
    while(tt--){
        count = 0;
        cin >> size;
        cin >> str;
        for(int i = 0; i < size; i++){
            if(str[i] != str[i +1]){
                count++;
            }
        }
        cout << floor(count/2.0) <<'\n';
    }

}
