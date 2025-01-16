#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, k, n;
    cin >>tt;
    while(tt--){
        cin >> size >> k >> n;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        sort(arr, arr + size, greater<int>());
        long long int sum = 0;
        for(int i = n - 1; i < size; i += k){
            sum += arr[i];
        }
        cout << sum << '\n';
    }

}
