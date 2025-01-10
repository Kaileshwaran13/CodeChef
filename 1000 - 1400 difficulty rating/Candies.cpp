#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;;
    cin >> tt;
    while(tt--){
        count = 0;
        cin >> num;
        int arr[num * 2];
        for(int i = 0; i < num * 2; i++){
            cin >> arr[i];
        }
        sort(arr, arr + (num * 2));

        for(int i = 0; i < num * 2 - 1; i++){
            if( arr[i] == arr[i + 1]){
                i++;
                if(arr[i] == arr[i+1]){
                    count = 3;
                    break;
                }
            }
            else{
                count = 0;
            }
        }
        if( count < 3){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
