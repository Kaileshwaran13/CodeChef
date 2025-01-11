#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    string str;
    cin >> tt;
    while(tt--){
        cin >> size;
        cin >> str;
        int num = size;
        if(size % 2 != 0){
            num = size - 1;
        }
        
        for(int i = 0; i < num; i++){
            swap(str[i],str[i+1]);
            i++;
        }
        
        for(int i = 0; i < size; i++){
            cout << char('z' - (str[i] - 'a'));
        }
        cout << '\n';
    }

}
