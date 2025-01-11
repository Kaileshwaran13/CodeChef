#include <bits/stdc++.h>
using namespace std;

int main() {
    long tt, size, num, sum;
    cin >> tt;
    while(tt--){
        cin >> size >> num;
        long arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        sum = 0;
        for(int i = 0; i < size; i++){
            if(arr[i] > num/2){
                sum += abs(arr[i] - 1);
            }
            else{
                sum += abs( arr[i] - num);
            }
        }
        cout << sum << '\n';
    }
    

}
