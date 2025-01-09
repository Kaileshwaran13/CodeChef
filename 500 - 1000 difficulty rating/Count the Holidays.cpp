#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    cin >>tt;
    while(tt--){
        cin >> num;
        count = 8;
        int arr[num] = {0};
        for(int i = 0; i < num; i++){
            cin >> arr[i];
            if( arr[i] % 7 != 0 && arr[i] % 7 != 6 ){
                count++;
            }
        }
        cout << count << '\n';
    }

}
