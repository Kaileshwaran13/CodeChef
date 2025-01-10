#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, val;
    cin >> tt;
    while(tt--){
        cin >> num >> val;
        int arr[num] = {0};
        for(int i = 0; i < num; i++){
            cin >> arr[i];
            if( val - arr[i] >= 0){
                val-= arr[i];
                cout << 1;
            }
            else{
                cout << 0;
            }
        }
        cout <<'\n';
    }

}
