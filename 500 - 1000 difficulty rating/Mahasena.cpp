#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    if(count > n - count){
        cout <<  "READY FOR BATTLE" << '\n';
    }
    else{
        cout << "NOT READY" << '\n';
    }
}
