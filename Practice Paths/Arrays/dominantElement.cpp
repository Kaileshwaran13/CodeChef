#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, maxValue, temp, count;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        maxValue = 0;
        maxValue = arr[n-1];
        int valArray[maxValue] = {0};
        for(int i = 0; i < n; i++){
            valArray[arr[i] - 1]++;
        }
        temp = 0;
        for(int i = 0; i < maxValue; i++){
            temp = max(temp, valArray[i]);
        }
        count = 0;
        for(int i = 0; i < maxValue; i++){
            if(temp == valArray[i]){
                count += 1;
            }
        }
        if(count > 1){
            cout << "NO" << '\n';
        }else{
            cout << "YES" << '\n';
        }
    }
}
