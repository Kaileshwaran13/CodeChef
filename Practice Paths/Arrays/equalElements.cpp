#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, temp, operation; 
    while(t--){
        cin >> n;
        operation = 1;
        temp = 1;
        int arr[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for(int i = 0; i < n; i++){
            if(arr[i] == arr[i + 1]){
                temp++;
                if(operation < temp){
                    operation = temp;
                }
            }else{
                temp = 1;
            }
        }
        cout << n - operation << '\n';
    }
}
