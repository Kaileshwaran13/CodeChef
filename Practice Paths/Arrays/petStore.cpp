#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, max, flag;
    while(t--){
        cin >> n;
        int arr[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        max = arr[n-1];
        int typeArr[max] = {0};
        for(int i = 0; i < n; i++){
            typeArr[arr[i] - 1]++;
        }
        flag = 0;
        for(int i = 0; i < max; i++){
            if(typeArr[i] % 2 == 0){
                continue;
            }else{
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
}
