#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, changedPrize, sum, diff;
    cin >>tt;
    while(tt--){
        diff = 0;
        sum = 0;
        cin >>size >> changedPrize;
        int arr[size] = {0};
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            sum += arr[i];
            if(arr[i] >= changedPrize){
                diff += changedPrize;
            }
            else{
                diff += arr[i];
            }
        }
        cout << sum - diff <<'\n';
    }

}
