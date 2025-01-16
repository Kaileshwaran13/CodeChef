#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    cin >> tt;
    while(tt--){
        cin >> size;
        int arr[size] = {0};
        for(int i  =0; i < size; i++){
            cin >> arr[i];
        }
        sort(arr, arr + size, greater<int>());
        long int sum1 = 0, sum2 = 0;
        for(int i = 0; i < size; i++){
            if( sum1 < sum2 || i == 0){
                sum1 += arr[i];
            }
            else{
                sum2 += arr[i];
            }
        }
        cout << max(sum1, sum2) <<'\n';
    }

}
