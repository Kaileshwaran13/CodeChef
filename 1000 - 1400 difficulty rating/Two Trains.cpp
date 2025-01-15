#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, sum;
    cin >> tt;
    while(tt--){
        sum = 0;
        cin >> size;
        int arr[size], maxVal = 0;
        for(int i = 0; i < size - 1; i++){
            cin >> arr[i];
            sum += arr[i];
            maxVal = max(maxVal, arr[i]);
        }
        cout << sum + maxVal <<'\n';
    }
}
